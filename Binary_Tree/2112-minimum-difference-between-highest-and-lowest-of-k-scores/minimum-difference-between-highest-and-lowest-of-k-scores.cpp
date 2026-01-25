class Solution {
public:
    int minimumDifference(vector<int>& nums, int k) {

        sort(nums.begin(),nums.end());

        int start=0,end=k-1;
        int n = nums.size();
        int mini = INT_MAX;
        while(end<n){

            int finale = nums[end]-nums[start];
            mini = min(mini,finale);
            end++;
            start++;
        }
        return mini;
    }
};