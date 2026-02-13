class Solution {
    public int jump(int[] nums) {

        int jumps=0,left=0,right=0;

        int n = nums.length;

        int farthest=0;

        while(right<n-1){

            for(int i=left;i<=right;i++){


                int sum = nums[i]+i;

                if(sum>farthest){
                    farthest= sum;
                }
            }
            left = right+1;
            right = farthest;
            jumps++;
        }

        return jumps;

        
        
    }
}