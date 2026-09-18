class Solution {
    public int numSubarrayProductLessThanK(int[] nums, int k) {

        if(k==0) return 0;

        int n = nums.length;

        int start=0,end=0;

        int count=0;
        int product=1;

        while(end<n){

            product*=nums[end];

            while(product>=k && start<end){
                product/=nums[start++];
            }

           if(product<k) count+=end-start+1;

            end++;
        }
        return count;
    }
}