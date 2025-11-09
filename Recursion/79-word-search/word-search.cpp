class Solution {
public:
bool dfs(int i,int j,string& word,vector<vector<char>>& board,int idx){
    if(idx==word.size()){
        return true;
    }
    if(i<0 || j<0 || i>=board.size() || j>=board[0].size() || board[i][j]!=word[idx]){
        return false;
    }
    char temp = board[i][j];
    board[i][j] = '*';

    bool found = dfs(i+1,j,word,board,idx+1) || // for down
                 dfs(i-1,j,word,board,idx+1) || // for up
                 dfs(i,j+1,word,board,idx+1) || // for right
                 dfs(i,j-1,word,board,idx+1) ;// for left
    
    board[i][j]=temp;
    return found;
}
    bool exist(vector<vector<char>>& board, string word) {
        int row = board.size();
        int col = board[0].size();
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                if(board[i][j]==word[0] && dfs(i,j,word,board,0))
                return true;
            }
        }
        return false;
    }
};