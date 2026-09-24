class Solution {

    public int longestSeq(String t1, String t2, int n, int m, int[][] dp){

        if(n==0 || m==0){

            return 0;
        }

        if(dp[n][m]!=-1){

            return dp[n][m];
        }


        if(t1.charAt(n-1)==t2.charAt(m-1)){

            dp[n][m] = 1+ longestSeq(t1,t2,n-1,m-1,dp);
        }

        else{

            dp[n][m] = Math.max(longestSeq(t1,t2,n-1,m,dp),longestSeq(t1,t2,n,m-1,dp));
        }

        return dp[n][m];
    }

    public int longestCommonSubsequence(String text1, String text2) {


        int n = text1.length();

        int m = text2.length();


        int[][] dp = new int[n+1][m+1];

        for(int i=0;i<=n;i++){

            Arrays.fill(dp[i],-1);
        }


        return longestSeq(text1,text2,n,m,dp);
        
    }
}