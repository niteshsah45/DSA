class Solution {
public:
    int maxDotProduct(vector<int>& nums1, vector<int>& nums2) {

        int n = nums1.size();
        int m = nums2.size();

        vector<vector<int>> dp(n+1,vector<int>(m+1,INT_MIN));

        for(int i=n-1;i>=0;i--){
            for(int j=m-1;j>=0;j--){

                int take = nums1[i]*nums2[j];

                if(dp[i+1][j+1]>0){
                    take+=dp[i+1][j+1];
                }

                int skipnums1 = dp[i][j+1];

                int skipnums2 = dp[i+1][j];

                dp[i][j] = max({take,skipnums1,skipnums2});
            }
        }
        return dp[0][0];
    }
};