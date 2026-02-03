class Solution {
public:
    bool isTrionic(vector<int>& nums) {

        int n = nums.size();

        int i=0;

        while(i+1<n && nums[i]<nums[i+1]){
            i++;
        }
        int p = i;

        if(p==0) return false;

        while(i+1<n && nums[i]>nums[i+1]){
            i++;
        }
        int q = i;

        if(q==p || q==n-1) return false;

        while(i+1<n && nums[i]<nums[i+1]){
            i++;
        }
       
        return i==n-1;
        
    }
};