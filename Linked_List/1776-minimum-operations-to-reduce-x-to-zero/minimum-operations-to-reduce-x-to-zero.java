class Solution {
    public int minOperations(int[] nums, int x) {


        int n = nums.length;

       int count =0;

       int sum =-x;
       int totalsum=0;

        for(int s:nums){

            totalsum+=s;
             sum+=s;
        }
        if(sum<0) return -1;
        if(sum==0) return n;


        int bestcase =-1,left=0;
        int check=0;

        for(int i=0;i<n;i++){

                check+=nums[i];

                while(check>sum){

                    check-=nums[left++];
                }

                if(check==sum){

                    bestcase  = Math.max(bestcase, i-left+1);
                }
        }

        return bestcase < 0 ? -1 : n-bestcase;


       
        
    }
}