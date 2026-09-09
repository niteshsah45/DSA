class Solution {
    public int pivotIndex(int[] nums) {
        

        int totalSum =0;

        for(int x:nums){
            totalSum+=x;
        }

        int left = 0;

        for(int i=0;i<nums.length;i++){

            left+=nums[i];

           if(left-nums[i]== totalSum-left) return i;
        }

        return -1;
    }
}