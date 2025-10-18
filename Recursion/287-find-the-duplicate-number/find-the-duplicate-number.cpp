class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int j=1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==nums[j]){
                return nums[i];
                break;
            }
            j++;
        }
        return 0;
    }
};