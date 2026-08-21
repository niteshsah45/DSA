class Solution {
    public int majorityElement(int[] nums) {

        int n = nums.length;

        int curr=nums[0];
        int vote=1;

        for(int i=1;i<n;i++){


            if(nums[i]==curr){
                vote++;
            }
            else if(vote==0){
                curr=nums[i];
                vote=1;
            }
            else{
                vote--;
            }
        }
        return curr;
    }
}