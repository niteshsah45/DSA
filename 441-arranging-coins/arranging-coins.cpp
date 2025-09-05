class Solution {
public:
long long findCoin(long long mid){
    long long sum=0;
    sum=mid*(mid+1)/2; 
    return sum;
}
    int arrangeCoins(int n) {
        int low=1;
        int high=n;
        while(low<=high){
            long long mid=low+(high-low)/2;
            long long result=findCoin(mid);
            if(result<=n){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        return high;
    }
};