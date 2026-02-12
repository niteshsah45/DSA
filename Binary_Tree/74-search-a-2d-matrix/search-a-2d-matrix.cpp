class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {


        int n = matrix.size();
        int n1 = matrix[0].size();

        int start=0;
        int end = n*n1-1;

        if(matrix[0][0]==target) return true;

        while(start<=end){

            int mid = start+(end-start)/2;

            int row = mid/n1;
            int col = mid%n1;

            //cout<<matrix[row][col]<<" ";

            if(matrix[row][col]==target) return true;

            else if(matrix[row][col]>target){
                end = mid-1;
            }
            else{
                start=mid+1;
            }
        }
        return false;
        
    }
};