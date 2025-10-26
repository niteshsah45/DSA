class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        map<int,int> mpp;
        mpp[0]=1;
        int sum=0;
        int count=0;
        for(auto num:nums){
            sum+=num;
            if(mpp.find(sum-goal)!=mpp.end()){
                count+=mpp[sum-goal];
            }
            mpp[sum]++;
        }
        return count;
    }
};