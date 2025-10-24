class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int start=0;
        int end=0;
        int maxiLen=0;
        while(end<nums.size()){
            if(nums[end]!=1){
                end++;
                start=end;
            }
            else{
                 maxiLen = max(maxiLen,end-start+1);
              end++;
            }
        }
        return maxiLen;
        
    }
};