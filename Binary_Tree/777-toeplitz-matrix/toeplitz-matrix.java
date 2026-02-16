class Solution {
    public boolean isToeplitzMatrix(int[][] matrix) {

        int n = matrix.length;
        int n1= matrix[0].length;

        for(int i=0;i<n-1;i++){
            for(int j=0;j<n1-1;j++){

                if(matrix[i][j]!=matrix[i+1][j+1]) return false;
            }
        }
        return true;
        
    }
}