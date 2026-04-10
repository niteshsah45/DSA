class Solution {
public:
    bool canJump(vector<int>& nums) {


        int ans =0;

        int n = nums.size();

        for(int i=0;i<n;i++){

            ans = max(ans,i+nums[i]);

            if(nums[i]==0 && i>=ans && i!=n-1) return false;

        }

        return true;
        
    }
};