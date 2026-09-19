class Solution {
    public int findLHS(int[] nums) {

        HashMap<Integer,Integer> map = new HashMap<>();


        for(int x:nums){

            map.put(x,map.getOrDefault(x,0)+1);
        }

        int ans=0;


        for(int i=0;i<nums.length;i++){


            if(map.containsKey(nums[i]+1)){

                ans = Math.max(ans,map.get(nums[i]+1)+map.get(nums[i]));
            }

        }

        return ans;
        
    }
}