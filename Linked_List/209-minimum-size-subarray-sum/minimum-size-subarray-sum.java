class Solution {
    public int minSubArrayLen(int target, int[] nums) {

        int mini =Integer.MAX_VALUE;

        int sum=0;

        // HashMap<Integer,Integer> map = new HashMap<>();

        // map.put(0,1);

        int left=0,right=0;

        int n = nums.length;


        while(right<n){

            sum+=nums[right];

            while(sum>=target){

                 mini = Math.min(mini,right-left+1);
                sum-=nums[left++];
            }
            right++;
        }

        return mini==Integer.MAX_VALUE?0:mini;
        
    }
}