class Solution {
    public int subarraySum(int[] nums, int k) {

        int count=0;


        int n = nums.length;


        for(int i=0;i<n;i++){

            int j=i+1;
            int sum = nums[i];

            if(sum==k) count++;

            while(j<n){

                sum+=nums[j];

                if(sum==k) count++;
                j++;
            }
        }
        return count;
        
    }
}