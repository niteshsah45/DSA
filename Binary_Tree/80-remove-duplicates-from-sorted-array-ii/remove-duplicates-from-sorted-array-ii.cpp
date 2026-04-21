class Solution {
public:
    int removeDuplicates(vector<int>& nums) {

        int idx=0;

        int n = nums.size();
        
        for(int num:nums){
            if(idx < 2 || num!=nums[idx-2]){

                nums[idx]=num;
                idx++;
            }
        }
        return idx;
        
    }
};