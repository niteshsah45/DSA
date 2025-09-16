class Solution {
public:
vector<int> generaterow(int rows){
    vector<int> ansrows;
    long long ans=1;
    ansrows.push_back(1);
    for(int col=1;col<rows;col++){
        ans=ans*(rows-col);
        ans=ans/(col);
        ansrows.push_back(ans);
    }
    return ansrows;
}
    vector<int> getRow(int rowIndex) {
        return generaterow(rowIndex+1);
    }
};