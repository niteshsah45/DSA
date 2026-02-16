class Solution {
    public void setZeroes(int[][] matrix) {

         int n = matrix.length;
        int n1= matrix[0].length;

       Set<Integer> row=new HashSet<>();
        Set<Integer> col= new HashSet<>();

        for(int i=0;i<n;i++){
            for(int j=0;j<n1;j++){

                if(matrix[i][j]==0){

                    row.add(i);
                    col.add(j);
                }
            }
        }
        for(int i=0;i<n;i++){

            if(row.contains(i)){
                for(int j=0;j<n1;j++){
                    matrix[i][j]=0;
                }

            }
            row.remove(i);
        }
        for(int i=0;i<n1;i++){

            if(col.contains(i)){
                for(int j=0;j<n;j++){
                    matrix[j][i]=0;
                }
            }
            col.remove(i);
        }
        //return matrix;
        
        
    }
}