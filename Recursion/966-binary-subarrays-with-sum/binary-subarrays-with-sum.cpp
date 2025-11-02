class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        unordered_map<int,int> mpp;
        mpp[0]=1;
        int preSum=0,count=0;
        for(int i=0;i<nums.size();i++){
            preSum+=nums[i]; // add current number in the sum
            int remove = preSum-goal; // check for subarray pattern after removing some digit;
            count+=mpp[remove]; // increase the count of the subarray
            mpp[preSum]+=1; // increase the number of sum happened
        }
        return count;
    }
};