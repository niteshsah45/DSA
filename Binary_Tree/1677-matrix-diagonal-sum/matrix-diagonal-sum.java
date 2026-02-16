class Solution {
    public int diagonalSum(int[][] mat) {

        int n = mat.length;
        int n1 = mat[0].length;

        int mid = n/2;

        int sum=0;

        int indx=0,indx1=0;

        for(int i=0;i<n;i++){

            System.out.print(mat[i][indx]+" ");


            sum+=mat[i][indx++];
            
        }

        for(int i=n1-1;i>=0;i--){

            if(i!=indx1){
                System.out.print(mat[indx1][i]+" ");
                sum+=mat[indx1][i];
               
            }
            indx1++;
        }

        return sum;
        
    }
}