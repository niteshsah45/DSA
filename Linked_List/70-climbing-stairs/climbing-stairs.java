class Solution {

    public int findfibo(int[] dp, int n){

        if(n<=1) return 1;

        if(dp[n-1]!=-1) return dp[n-1];

        return dp[n-1] = findfibo(dp,n-1)+findfibo(dp,n-2);
    }
    public int climbStairs(int n) {

        if(n<=1) return 1;

        int[] dp = new int[n];

        for(int i=0;i<n;i++){

            dp[i]=-1;
        }

        findfibo(dp,n);

        for(int i=0;i<n;i++){

            System.out.print(dp[i]);
        }

        return dp[n-1];
    }
}