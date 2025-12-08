class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
        int maxilen =1;
        int start=0,end=1;
        int n =nums.size();
        int increaser =1;
        while(end<n){
            if(nums[end]>nums[start]){
                maxilen = max(maxilen,increaser+1);
                end++;
                start++;
                increaser++;
            }
            else if(nums[end]<=nums[start]){
                start = end;
                end++;
                increaser=1;
            }
            else{
                end++;
            }
        }
        return maxilen;  
    }
};