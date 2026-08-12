class Solution {
    public int maxSubarrayLength(int[] nums, int k) {

        HashMap<Integer,Integer> map = new HashMap<>();

        int maxi=0;

        int left=0,right=0;

        while(right<nums.length){


            map.put(nums[right],map.getOrDefault(nums[right],0)+1);
            if(map.get(nums[right])<=k){
                maxi = Math.max(maxi,right-left+1);
            }

            

                while(map.get(nums[right])>k){

                     map.put(nums[left],map.get(nums[left])-1);
                    left++;
                }
                
            right++;
        }

        return maxi;
        
    }
}