class Solution {
public:
    int thirdMax(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        nums.erase(unique(nums.begin(),nums.end()),nums.end());
        int n = nums.size();
        int maxi = *max_element(nums.begin(),nums.end());
        if(n<=2) return maxi;
        reverse(nums.begin(),nums.end());
        return nums[2];  
    }
};