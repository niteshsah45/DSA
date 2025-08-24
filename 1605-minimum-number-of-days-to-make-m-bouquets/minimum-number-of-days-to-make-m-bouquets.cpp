class Solution {
public:
bool possiblebloomday(vector<int> &bloomDay,int mid,int m,int k){
    int n=bloomDay.size();
    int noof_bouquets=0;
    int count=0;
    for(int i=0;i<n;i++){
        if(bloomDay[i]<=mid){
            count++;
        }
        else{
            noof_bouquets+=count/k;
            count=0;
        }
    }
    noof_bouquets+=count/k;
    if(noof_bouquets>=m) return true;
    else return false;
}
    int minDays(vector<int>& bloomDay, int m, int k) {
        int n=bloomDay.size();
        int low=*min_element(bloomDay.begin(),bloomDay.end());
        int high=*max_element(bloomDay.begin(),bloomDay.end());
        int store=-1;
        while(low<=high){
            int mid=low+(high-low)/2;
            bool result = possiblebloomday(bloomDay,mid,m,k);
            if(result){
                store=mid;
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        } 
        return store;  
        
    }
};