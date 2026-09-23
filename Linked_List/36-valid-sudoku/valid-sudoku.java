class Solution {
    public boolean isValidSudoku(char[][] board) {


        int n  = board.length;
        int m = board[0].length;

        for(int i=0;i<9;i++){

            boolean[] seen = new boolean[9];

            for(int j =0;j<9;j++){

                int num = board[i][j]-'1';
               

                if(board[i][j]!='.'){

                 if(seen[num]) return false;
                 seen[num] = true;
                }
            }
        }

        for(int i=0;i<9;i++){

            boolean[] seen = new boolean[9];

            for(int j=0;j<9;j++){

                  int num = board[j][i]-'1';

                if(board[j][i]!='.'){

                
                if(seen[num]) return false;
                seen[num] = true;
                }
            }
        }

        for(int block=0;block<9;block++){

            boolean[] seen = new boolean[9];

            for(int i=0;i<3;i++){


                for(int j=0;j<3;j++){

                    int r = 3*(block/3)+i;

                    int c = 3*(block%3)+j;

                    int num = board[r][c]-'1';
                   

                    if(board[r][c]!='.'){

                   
                     if(seen[num]) return false;
                    seen[num]=true;

                    }
                }
            }
        }
        return true;
        
    }
}