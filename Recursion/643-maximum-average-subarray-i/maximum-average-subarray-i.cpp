class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int left=0,right=0;
        int sum =0;
        double ans=-1e18;
        int n = nums.size();
        if(n==1) return nums[0]/1.0;
        while(right<nums.size()){
            sum+=nums[right];
            right++;
            if(right-left==k){
                double avg = double(sum)/k;
                ans = max(avg,ans);
                sum-=nums[left];
                left++;
            }
        }
        return ans;
        
    }
};