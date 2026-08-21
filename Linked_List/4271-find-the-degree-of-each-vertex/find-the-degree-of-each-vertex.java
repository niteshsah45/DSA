class Solution {
    public int[] findDegrees(int[][] matrix) {


        int n = matrix.length;
        int m = matrix[0].length;

        int[] ans = new int[n];


        for(int i=0;i<n;i++){

            int count=0;

            for(int x:matrix[i]){

                if(x==1) count++;
            }
            ans[i] = count;
        }
        return ans;
        
    }
}