class Solution {
public:
bool bloomcheck(vector<int>& bloomDay, int mid,int m,int k){
        int n=bloomDay.size();
        int countb=0;
        int count=0;
        for(int i=0;i<n;i++){
            if(bloomDay[i]<=mid){
                count++;
                if(count>=k){
                    countb++;
                    count=0;
                }
            }
            else{
                count=0;
            }
        }
        if(countb>=m){
            return true;
        }
        else{
            return false;
        }
}
    int minDays(vector<int>& bloomDay, int m, int k) {
        int n=bloomDay.size();
        if((long long)m*k>n) return -1;
        int low=*min_element(bloomDay.begin(),bloomDay.end());
        int high=*max_element(bloomDay.begin(),bloomDay.end());
        while(low<=high){
            int mid=low+(high-low)/2;
            bool result= bloomcheck(bloomDay,mid,m,k);
            if(result){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return low;     
    }
};