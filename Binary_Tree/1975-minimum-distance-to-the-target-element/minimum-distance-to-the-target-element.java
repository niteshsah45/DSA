class Solution {
    public int getMinDistance(int[] nums, int target, int start) {

        int ans =Integer.MAX_VALUE;

        int n = nums.length;

        for(int i=0;i<n;i++){
            
            if(nums[i]==target){
                ans = Math.min(ans,Math.abs(i-start));
            }
        }
        return ans;
        
    }
}