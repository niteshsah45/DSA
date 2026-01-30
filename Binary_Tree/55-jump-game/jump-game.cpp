class Solution {
public:
    bool canJump(vector<int>& nums) {

        int maxIdx =0;
        int n = nums.size();
        //if(n==1) return true;

        for(int i=0;i<n;i++){

            if(i> maxIdx) return false;

            maxIdx = max(maxIdx,nums[i]+i);
        }
        if(maxIdx>=n-1) return true;
        return false;
    }
};