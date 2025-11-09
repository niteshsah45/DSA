class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int n=nums.size();
        int start=0;
        int end=1;
        while(start<end && end<n){
            if(nums[end]%2==0){
                swap(nums[start],nums[end]);
                start++;
            }
            else if(nums[start]%2==0){
                start++;
            }
            end++;
        }
        return nums;  
    }
};