class Solution {
    public boolean searchMatrix(int[][] matrix, int target) {

        int n = matrix.length;
        int n1= matrix[0].length;

        int start=0;
        int end = n*n1-1;

        while(start<=end){

            int mid = start+(end-start)/2;

            int row = mid/n1;
            int col = mid%n1;

            if(matrix[row][col]==target) return true;

            else if(matrix[row][col]>target){
                end= mid-1;
            }
            else{
                start= mid+1;
            }
        }
        return false;
        
    }
}