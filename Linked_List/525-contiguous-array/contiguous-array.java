class Solution {
    public int findMaxLength(int[] nums) {


        int n = nums.length;

        int count =0;

        HashMap<Integer,Integer> map = new HashMap<>();

        map.put(0,-1);

        int right=0;

        int maxi =0;

        while(right<n){

            if(nums[right]==0) count--;
            else if(nums[right]==1) count++;


            if(map.containsKey(count)){

                maxi = Math.max(maxi,right-map.get(count));
            }

            map.putIfAbsent(count,right);
            right++;
        }

        return maxi;
        
    }
}