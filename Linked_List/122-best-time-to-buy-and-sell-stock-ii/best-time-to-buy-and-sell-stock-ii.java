class Solution {

    public int profit=0;

    public int findProfit(int[] prices, int idx, int check,int[][] dp){

        if(idx==prices.length) return 0;

        if(dp[idx][check]!=-1) return dp[idx][check];

        if(check==0){

            dp[idx][check] = Math.max(-prices[idx]+ findProfit(prices,idx+1,1,dp),findProfit(prices,idx+1,0,dp));

        }
        else if(check==1){

            dp[idx][check] = Math.max(prices[idx]+findProfit(prices,idx+1,0,dp),findProfit(prices,idx+1,1,dp));
        }

        return dp[idx][check];
    }
    public int maxProfit(int[] prices) {

        int[][] dp = new int[prices.length+1][2];

        for(int i=0;i<=prices.length;i++){

            Arrays.fill(dp[i],-1);
        }

        int n = prices.length;


        return findProfit(prices,0,0,dp);
        
    }
}