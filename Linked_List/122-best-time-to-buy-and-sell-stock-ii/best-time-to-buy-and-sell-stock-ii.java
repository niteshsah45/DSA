class Solution {


    public int findMaxProfit(int[] prices, int[][] dp, int check,int idx){

            if(idx==prices.length) return 0;

            if(dp[idx][check]!=-1) return dp[idx][check];


            if(check==0){

                return dp[idx][check] = Math.max(-prices[idx]+findMaxProfit(prices,dp,1,idx+1), findMaxProfit(prices,dp,0,idx+1));
            }
            else if(check==1){

                return dp[idx][check] = Math.max(prices[idx]+findMaxProfit(prices,dp,0,idx+1),findMaxProfit(prices,dp,1,idx+1));
            }

            return dp[idx][check];
    }
    public int maxProfit(int[] prices) {


        int n = prices.length;

        int[][] dp = new int[n+1][2];

        for(int i=0;i<=n;i++){

            Arrays.fill(dp[i],-1);
        }

        return findMaxProfit(prices,dp,0,0);
        
    }
}