class Solution {
public:
void solveSubsets(int index,int k,int n,vector<vector<int>>& ans,vector<int>& ds){
    if(ds.size()==k){
        if(n==0) ans.push_back(ds);
        return;
    }
    for(int i=index;i<=9;i++){
        ds.push_back(i);
        solveSubsets(i+1,k,n-i,ans,ds);
        ds.pop_back();
    }
}
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>> ans;
        vector<int> ds;
        solveSubsets(1,k,n,ans,ds);
        return ans;
    }
};