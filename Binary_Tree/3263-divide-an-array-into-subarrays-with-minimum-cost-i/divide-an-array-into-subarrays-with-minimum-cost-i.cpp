class Solution {
public:
    int minimumCost(vector<int>& nums) {

        int first = nums[0];

        int maxleft=nums[1];

        int ans = INT_MAX;

        for(int j=2;j<nums.size();j++){

            ans = min(ans,maxleft+nums[j]);

            maxleft = min(maxleft,nums[j]);
        }
        return first+ans;
        
    }
};