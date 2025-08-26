class Solution {
public:
long long kokospeed(vector<int>& piles,int mid, int h){
    int n=piles.size();
    long long hours=0;
    for(int i=0;i<n;i++){
        hours+=(piles[i]+mid-1LL)/mid;
    }
    return hours;
}
    int minEatingSpeed(vector<int>& piles, int h) {
        int low=1;
        int high=*max_element(piles.begin(),piles.end());
        while(low<=high){
            int mid=low+(high-low)/2;
            long long result= kokospeed(piles,mid,h);
            if(result<=h){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return low;
    }
};