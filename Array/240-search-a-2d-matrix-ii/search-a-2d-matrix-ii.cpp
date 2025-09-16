class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n=matrix.size();
        int m=matrix[0].size();
        int row=0,col=m-1;
        while(row<n && col>=0){
            if(matrix[row][col]==target){
                return true;
            }
            else if(matrix[row][col]<target){// 15 for target 5 is greater so 5 will never lie in 15 to 30 it maybe lies in 15 to 1 so eleminate the col
                row++;
            }
            else{
                col--;
            }
        }
        return false;
        
    }
};