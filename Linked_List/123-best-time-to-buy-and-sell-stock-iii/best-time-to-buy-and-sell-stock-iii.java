class Solution {


    public int findMaxProfit(int[] prices, int[][][] dp ,int check,int idx,int tran){

        if(prices.length==idx || tran==0) return 0;


        if(dp[idx][check][tran]!=-1) return dp[idx][check][tran];

        if(check==0){

            return dp[idx][check][tran] = Math.max(-prices[idx]+findMaxProfit(prices,dp,1,idx+1,tran),findMaxProfit(prices,dp,0,idx+1,tran));
        }
        else if(check==1){
            return dp[idx][check][tran] = Math.max(prices[idx]+findMaxProfit(prices,dp,0,idx+1,tran-1),findMaxProfit(prices,dp,1,idx+1,tran));
        }

        return dp[idx][check][tran];
    }
    public int maxProfit(int[] prices) {

        int n = prices.length;

        int[][][] dp = new int[n+1][2][3];


        for(int i=0;i<=n;i++){

            for(int j=0;j<2;j++){
              Arrays.fill(dp[i][j],-1);
            }
        }

       return findMaxProfit(prices,dp,0,0,2);
 
    }
}