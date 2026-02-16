class Solution {
    public int maximumWealth(int[][] accounts) {

        int n = accounts.length;
        int n1 = accounts[0].length;

        int maxi=Integer.MIN_VALUE;

        for(int i=0;i<n;i++){
            
            int sum=0;
            for(int j=0;j<n1;j++){

                sum+=accounts[i][j];
            }
            if(sum>maxi){
                maxi=sum;
            }
        }
        return maxi;
        
    }
}