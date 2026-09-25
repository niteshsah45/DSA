class Solution {
    public int findMin(int[] nums) {


        int n = nums.length;

        int start = 0,end=n-1;

        if(n==1) return nums[0];

        int mini = Integer.MAX_VALUE;

        while(start<end){

            int mid = start+(end-start)/2;

            if(nums[start]<=nums[mid]){

                if(nums[mid]>nums[end]){

                    start=mid+1;
                }
                else {
                    end=mid-1;
                }

                mini = Math.min(mini,nums[start]);
            }
            else{
                
                if(nums[mid]>nums[end]){

                    start = mid+1;
                }
                else end=mid-1;

                mini = Math.min(mini,nums[mid]);

            }
        }

        return mini;
        
    }
}