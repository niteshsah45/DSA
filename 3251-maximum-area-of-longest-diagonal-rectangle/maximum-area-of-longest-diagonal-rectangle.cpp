class Solution {
public:
    int areaOfMaxDiagonal(vector<vector<int>>& dimension) {
        vector<double> result;
        vector<int> area;
        int size=dimension.size();
        for(int i=0;i<size;i++){
             int store=0;
            for(int j=0;j<2;j++){
               store+=dimension[i][j]*dimension[i][j];
            }
            result.push_back(sqrt(store));
            area.push_back(dimension[i][0]*dimension[i][1]);
        }
        int idx=0;
        for(int i=1;i<result.size();i++){
            if(result[i]>result[idx]){
                idx=i;
            }
            else if(abs(result[i]-result[idx])<1e-9 && area[i]>area[idx]){
                idx=i;
            }
        }
        return area[idx];
    }
};