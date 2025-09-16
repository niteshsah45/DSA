class Solution {
public:
vector<int> generaterow(int row){
    vector<int> ansrow;
    long long ans=1;
    ansrow.push_back(1);
    for(int col=1;col<row;col++){
        ans=ans*(row-col);
        ans=ans/(col);
        ansrow.push_back(ans);
    }
    return ansrow;
}
    vector<vector<int>> generate(int numRows) {
       vector<vector<int>>result;
        for(int i=1;i<=numRows;i++){
            result.push_back(generaterow(i));

        }
        return result;
        
    }
};