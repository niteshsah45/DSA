class Solution {
    public int firstStableIndex(int[] nums, int k) {

        int maxi=nums[0];

        int[] suffixmin = new int[nums.length];
        suffixmin[nums.length-1]=nums[nums.length-1];

        for(int i=nums.length-2;i>=0;i--){
            
            suffixmin[i] = Math.min(nums[i],suffixmin[i+1]);
        }

        for(int i=0;i<nums.length;i++){

            maxi = Math.max(maxi,nums[i]);


            int check = maxi-suffixmin[i];

            if(check<=k) return i;
        }
        return -1;
        
    }
}