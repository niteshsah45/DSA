class Solution {
public:
void permutationSets(int n,vector<int>& nums,vector<vector<int>>& ans,vector<int> freq,vector<int> ds){
    if(ds.size()==n){
        ans.push_back(ds);
        return;
    }
    for(int i=0;i<n;i++){
        if(i>0 && nums[i]==nums[i-1] && !freq[i-1]) continue;
        if(!freq[i]){
            ds.push_back(nums[i]);
            freq[i]=1;
            permutationSets(n,nums,ans,freq,ds);
            freq[i]=0;
            ds.pop_back();
        }
    }

}
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        sort(nums.begin(),nums.end());
         int n=nums.size();
        vector<vector<int>> ans;
        vector<int> ds;
        vector<int> freq(n,0);
        permutationSets(n,nums,ans,freq,ds);
        return ans;
    }
};