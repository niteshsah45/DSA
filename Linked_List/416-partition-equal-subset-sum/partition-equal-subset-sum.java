class Solution {
    public boolean canPartition(int[] nums) {

        int totalsum =0;

        for(int x:nums) totalsum+=x;

        if(totalsum%2!=0) return false;

        int n = nums.length;

        boolean[][] dp =  new boolean[n+1][totalsum/2+1];

        for(int i=0;i<=n;i++){

            dp[i][0] = true;
        }


        for(int i=1;i<=n;i++){

            for(int j=1;j<=totalsum/2;j++){


                if(nums[i-1]<=j){

                    dp[i][j] = dp[i-1][j-nums[i-1]] || dp[i-1][j];
                }

                else dp[i][j] = dp[i-1][j];
            }
        }


        return dp[n][totalsum/2];
        
    }
}