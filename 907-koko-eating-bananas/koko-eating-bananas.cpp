class Solution {
public:
    // finding the each totaltime with each number from 1 to max in the array
    long long findingtotaltime(vector<int> &piles,int mid){
        long long total=0;
        for(int i=0;i<piles.size();i++){
            total+=(piles[i]+mid-1)/mid;// use ceil function to get roundup in ceilling example 1.5 to 2
        }
        return total;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        // find the totaltimerequired using binary search which is less than give hours
        long long low=1,high=*max_element(piles.begin(),piles.end());
        long long ans=high;
        while(low<=high){
            long long mid=low+(high-low)/2;
            long long totaltime=findingtotaltime(piles,mid);
            if(totaltime<=h){
                ans=mid;
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return (int)ans;
    }
};