class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {

        int n = matrix.size();
        int m = matrix[0].size();

        int total=n*m;

        vector<int> ans;
        int firstrow=0,lastrow=n-1,firstcol=0,lastcol=m-1;

        while(total>0){

            for(int i=firstcol;i<=lastcol && total>0;i++){
                ans.push_back(matrix[firstrow][i]);
                cout<<matrix[firstrow][i];
                total--;
            }
            firstrow++;

            for(int i=firstrow;i<=lastrow && total>0;i++){
                ans.push_back(matrix[i][lastcol]);
                cout<<matrix[i][lastcol];
                total--;
            }
            lastcol--;
            for(int i=lastcol;i>=firstcol && total>0;i--){

                ans.push_back(matrix[lastrow][i]);
                cout<<matrix[lastrow][i];
                total--;
            }
            lastrow--;

            for(int i=lastrow;i>=firstrow && total>0;i--){
                ans.push_back(matrix[i][firstcol]);
                cout<<matrix[i][firstcol];
                total--;
            }
            firstcol++;
        }
        return ans;
        
    }
};