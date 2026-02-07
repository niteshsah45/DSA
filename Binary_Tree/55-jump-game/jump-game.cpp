class Solution {
public:
    bool canJump(vector<int>& nums) {


        int ans =0;

        int n = nums.size();

       if(n==1) return true;

        for(int i=0;i<n;i++){

            if(i!=n-1 && nums[i]==0 && nums[i]+i>=ans) return false;

            ans = max(ans,nums[i]+i);
        }

        if(ans>=n-1) return true;
        return false;
        
    }
};