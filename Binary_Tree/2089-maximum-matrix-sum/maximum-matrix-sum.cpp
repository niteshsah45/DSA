class Solution {
public:

    long long maxMatrixSum(vector<vector<int>>& matrix) {

        int negcount=0;
        int mini=INT_MAX;
        long long sum =0;

        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[0].size();j++){
                if(matrix[i][j]<0){
                    negcount++;
                }
                mini = min(mini,abs(matrix[i][j]));

                sum+=abs(matrix[i][j]);
            }
        }

        if(negcount%2==0)
            return sum;

        else return sum-=2*mini;
        
    }
};