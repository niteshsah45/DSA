class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {
        int ans = original;
        int n = nums.size();
        for(int i=0;i<n;i++){
            if(find(nums.begin(),nums.end(),ans)!=nums.end()){
                ans*=2;
            }
            else{
                return ans;
            }
        }
        return ans;
    }
};