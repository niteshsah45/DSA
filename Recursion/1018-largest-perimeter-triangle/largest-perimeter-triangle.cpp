class Solution {
public:
    int largestPerimeter(vector<int>& nums) {
        if(nums.empty()) return 0;
        sort(nums.begin(),nums.end());
        reverse(nums.begin(),nums.end());
        int val=0;
        for(int i=0;i<nums.size()-2;i++){
            if(nums[i+1]+nums[i+2]>nums[i]){
                val=nums[i]+nums[i+1]+nums[i+2];
                break;
            }
        }
        return val;
    }
};