class Solution {


    public int findmin(int[] nums,int i){

        int mini = Integer.MAX_VALUE;

        for(int j=i;j<nums.length;j++){

            if(nums[j]<mini){
                mini = nums[j];
            }
        }
        return mini;
    }
    public int firstStableIndex(int[] nums, int k) {


        int maxi = nums[0];

        int mini =nums[0];

        for(int i=0;i<nums.length;i++){

            if(nums[i]>maxi){
                maxi=nums[i];
            }
             mini = findmin(nums,i);

            int ans = maxi-mini;
            if(ans<=k) return i;
        }
        return -1;
    }
}