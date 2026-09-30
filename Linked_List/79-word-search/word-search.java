class Solution {

    public boolean dfs(int i, int j, char[][] board, String word, int idx){


        if(idx==word.length()) return true;

        if(i<0 || j<0 || i>=board.length || j>=board[0].length || word.charAt(idx)!=board[i][j]) return false;

        char temp = board[i][j];
        board[i][j] ='*';

        boolean found = dfs(i+1,j,board,word,idx+1) ||
                        dfs(i-1,j,board,word,idx+1) ||
                        dfs(i,j+1,board,word,idx+1) ||
                        dfs(i,j-1,board,word,idx+1);

        board[i][j] = temp;
        return found;
                    
    }
    public boolean exist(char[][] board, String word) {


        int row = board.length;

        int col = board[0].length;

        for(int i=0;i<row;i++){

            for(int j=0;j<col;j++){


                if(board[i][j] == word.charAt(0) && dfs(i,j,board,word,0)) return true;
            }
        }
        return false;
    }
}