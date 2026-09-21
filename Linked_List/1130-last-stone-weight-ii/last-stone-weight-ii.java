class Solution {
    public int lastStoneWeightII(int[] stones) {


        int n = stones.length;

        int total=0;

        for(int x:stones) total+=x;

        boolean[][] dp = new boolean[n+1][total+1];


        for(int i=0;i<=n;i++){

            dp[i][0] = true;
        }


        for(int i=1;i<=n;i++){

            for(int j=0;j<=total;j++){


                if(stones[i-1]<=j){

                    dp[i][j] = dp[i-1][j] || dp[i-1][j-stones[i-1]];
                }

                else dp[i][j] = dp[i-1][j];
            }
        }


        int mini = Integer.MAX_VALUE;  

        for(int i=0;i<=total/2;i++){

            if(dp[n][i]){

                mini = Math.min(mini,Math.abs(total-2*i));
            }
        }

        return mini;
        
    }
}