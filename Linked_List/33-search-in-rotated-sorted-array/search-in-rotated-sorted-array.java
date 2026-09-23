class Solution {
    public int search(int[] nums, int target) {


        int n = nums.length;

        int start=0,end=n-1;

        while(start<=end){


            int mid = start+(end-start)/2;

             System.out.print(mid);

            if(nums[mid]==target) return mid;


            else if(nums[start]<=nums[mid]){

                if(target>=nums[start] && target<=nums[mid]){

                    end=mid-1;
                }
                else{
                    start=mid+1;
                }
            }

            else{

                if(target>=nums[mid] && target<=nums[end]){

                    start=mid+1;
                }
                else{
                    end=mid-1;
                }
            }
        }

        return -1;
        
    }
}