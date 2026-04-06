class Solution {
public:
    bool canJump(vector<int>& nums) {

        int n = nums.size();

        if( n==1 && nums[0]==0) return true;

        int maxi =0;

        for(int i=0;i<n;i++){

            maxi = max(maxi,i+nums[i]);

            if(i!=n-1 && nums[i]==0 && i>=maxi) return false;
        }
        
        return true;
    }
};