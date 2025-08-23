class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        // by kadanes algo 
        int n=nums.size();
        int low=0,high=0;
        int maxsum=INT_MIN;
        int currentsum=0;
        while(low<=high && high<n){
            	currentsum += nums[high];
                maxsum=max(currentsum,maxsum);
                if(currentsum<0){
                    currentsum=0;
                    low++;
                }
                
                high++;
        }
        return maxsum;
        
    }
};