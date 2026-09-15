class Solution {
    public double findMaxAverage(int[] nums, int k) {

        int left=0,right=0;



        double maxi=Integer.MIN_VALUE;

        int n = nums.length;

        if(n==1) return nums[0]/1.0;
        double sum=0;

        while(right<n){

            sum+=nums[right];

            if(right-left+1==k){

               maxi = Math.max(maxi,sum/k);
                sum-=nums[left];
                left++;
            }

            right++;
        }
        return maxi;
        
    }
}