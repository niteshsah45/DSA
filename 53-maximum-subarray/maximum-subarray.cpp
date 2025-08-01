class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int right=0,sum=0;
        int maxsum=INT_MIN;
        int n=nums.size();
        while(right<n){
            sum+=nums[right++];
            maxsum=max(maxsum,sum);
              if(sum<0){
                 sum=0;
            }

        }
        return maxsum;
        
    }
};