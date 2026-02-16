class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {

        int n = matrix.size();
        int n1= matrix[0].size();

       set<int> row;
        set<int> col;

        for(int i=0;i<n;i++){
            for(int j=0;j<n1;j++){

                if(matrix[i][j]==0){

                    row.insert(i);
                    col.insert(j);
                }
            }
        }
        for(int i=0;i<n;i++){

            if(row.find(i)!=row.end()){
                for(int j=0;j<n1;j++){
                    matrix[i][j]=0;
                }

            }
            row.erase(i);
        }
        for(int i=0;i<n1;i++){

            if(col.find(i)!=col.end()){
                for(int j=0;j<n;j++){
                    matrix[j][i]=0;
                }
            }
            col.erase(i);
        }
        //return matrix;
        
    }
};