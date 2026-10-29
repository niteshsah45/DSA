class Solution {

    int[] dp;

    public int solve(int[] nums,int idx){

        if(idx>=nums.length) return 0;

        if(dp[idx]!=-1) return dp[idx];

        return dp[idx] = Math.max(nums[idx] + solve(nums,idx+2),solve(nums,idx+1));
    }
    public int rob(int[] nums) {

        int n = nums.length;
        dp = new int[n+1];

        Arrays.fill(dp,-1);

        return solve(nums,0);
    }
}