class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        for(int i=0;i<board.size();i++){ // row checking
            vector<bool> seen(9,false);
            for(int j=0;j<board[0].size();j++){
                if(board[i][j]!='.'){
                    int num = board[i][j]-'1';
                    if(seen[num]) return false;
                    seen[num]=true;
                }
            }
        }
        for(int i=0;i<board.size();i++){ // row checking
            vector<bool> seen(9,false);
            for(int j=0;j<board[0].size();j++){
                if(board[j][i]!='.'){
                    int num = board[j][i]-'1';
                    if(seen[num]) return false;
                    seen[num]=true;
                }
            }
        }
        for(int block=0;block<9;block++){  // checking all block 3*3
            vector<bool> seen(9,false);
            for(int i=0;i<3;i++){
                for(int j=0;j<3;j++){
                    int r = 3*(block/3)+i;
                    int c = 3* (block%3)+j;
                    if(board[r][c]!='.'){
                        int num =board[r][c]-'1';
                        if(seen[num]) return false;
                        seen[num]=true;
                    }
                }
            }
        }
        return true;   
    }
};