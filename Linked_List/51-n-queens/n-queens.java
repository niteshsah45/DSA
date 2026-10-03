class Solution {

    public void findPath(int col, int n, boolean[] rowcheck, boolean[] lowerdia,boolean[] upperdia, List<List<String>> ans, char[][] board){

        if(col==n){

            List<String> current = new ArrayList<>();

            for(int i=0;i<n;i++){

                current.add(new String(board[i]));
            }
            ans.add(current);
            return;
        }

        for(int row=0;row<n;row++){

            if(rowcheck[row]==false && lowerdia[row+col]==false && upperdia[n-1+col-row]==false){

                 board[row][col]='Q';
                 rowcheck[row]=true;
                 lowerdia[row+col]=true;
                 upperdia[n-1+col-row]=true;

                 findPath(col+1,n,rowcheck,lowerdia,upperdia,ans,board);

                 board[row][col]='.';
                 rowcheck[row]=false;
                 lowerdia[row+col]=false;
                 upperdia[n-1+col-row]=false;
            }
        }
    }
    public List<List<String>> solveNQueens(int n) {



        List<List<String>> ans = new ArrayList<>();

        char[][] board = new char[n][n];

        for(int i=0;i<n;i++){

            Arrays.fill(board[i],'.');
        }


        boolean[] rowcheck = new boolean[n];
        boolean[] lowerdia = new boolean[2*n-1];
        boolean[] upperdia = new boolean[2*n-1];

        findPath(0,n,rowcheck,lowerdia,upperdia,ans,board);
        return ans;
        
    }
}