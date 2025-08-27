class Solution {
public:
bool binarysearch(vector<int>& matrix,int target){
    int low=0;
    int high=matrix.size()-1;
    while(low<=high){
       int mid=low+(high-low)/2;
       if(matrix[mid]==target){
        return true;
       } 
       else if(matrix[mid]>target){
        high=mid-1;
       }
       else{
        low=mid+1;
       }
    }
    return false;
}
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int rows=matrix.size();
        int cols=matrix[0].size();
        for(int i=0;i<rows;i++){
              bool result= binarysearch(matrix[i],target);
              if(result){
                return true;
              } 
        }
        return false; 
    }
};