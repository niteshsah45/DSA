class Solution {
    public int jump(int[] nums) {

        int jumps=0,left=0,right=0;
        int farthest=0;

        int n = nums.length;

        while(right<n-1){

            for(int j=left;j<=right;j++){

                farthest = Math.max(farthest,nums[j]+j);
               
            }

            left = right+1;
            right = farthest;
            jumps++;
        }

        return jumps;
    }
}