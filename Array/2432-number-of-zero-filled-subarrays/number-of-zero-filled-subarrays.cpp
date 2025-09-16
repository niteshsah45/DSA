class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
        long long count=0;
        int n=nums.size();
        long long maxi=0;
        int right=0;
        while(right<n){
            if(nums[right]==0){
                maxi++;
            }
            else{
                count=count+(maxi*(maxi+1))/2;
                maxi=0;
            }
            right++;
        }
        count=count+(maxi*(maxi+1))/2;
        return count;
        
    }
};