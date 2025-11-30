class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {
        int ori = original;
        int n = nums.size();
        for(int i=0;i<n;i++){
            if(find(nums.begin(),nums.end(),ori)!=nums.end()){
                ori*=2;
            }
            else{
                return ori;
            }
        }
        return ori;  
    }
};