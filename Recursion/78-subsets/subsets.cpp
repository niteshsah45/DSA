class Solution {
public:
void printSubsets(int index,vector<int>& nums,vector<int>& ds,int n,vector<vector<int>>& result){
    if(index==n){
        result.push_back(ds);
        return ;
    }
    ds.push_back(nums[index]);
    printSubsets(index+1,nums,ds,n,result);
    ds.pop_back();
    printSubsets(index+1,nums,ds,n,result);
}
    vector<vector<int>> subsets(vector<int>& nums) {
        int n=nums.size();
        vector<int> ds;
        vector<vector<int>> result;
        printSubsets(0,nums,ds,n,result);
        return result;
    }
};