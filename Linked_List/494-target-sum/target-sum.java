class Solution {
    public int findTargetSumWays(int[] nums, int target) {


        int n = nums.length;

        int total=0;


        for(int x:nums){

            total+=x;
        }

        if(Math.abs(target)>total) return 0;

        if((target+total)%2!=0) return 0;

        int p = (target+total)/2;

        int[][] dp = new int[n+1][p+1];

        for(int i=0;i<=n;i++){

            dp[i][0]=1;
        }

        for(int i=1;i<=n;i++){

            for(int j=0;j<=p;j++){


                if(nums[i-1]<=j){

                    dp[i][j] = dp[i-1][j] + dp[i-1][j-nums[i-1]];
                }

                else dp[i][j] = dp[i-1][j];
            }
        }

        return dp[n][p];
        
    }
}