class Solution {
public:
int countNeg(vector<int>& grid){
    int ans=0;
    for(int i=grid.size()-1;i>=0;i--){
        if(grid[i]<0) ans++;
        else{
            break;
        }
    }
    return ans;
}
    int countNegatives(vector<vector<int>>& grid) {
        int n = grid.size();
        int result=0;
        for(int i=0;i<n;i++){
            int total = countNeg(grid[i]);
            result+=total;
        }
        return result;
    }
};