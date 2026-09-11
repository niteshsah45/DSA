class Solution {
    public boolean checkSubarraySum(int[] nums, int k) {

        HashMap<Integer,Integer> map = new HashMap<>();

        map.put(0,-1);

        if(nums.length<=1) return false;

        int sum =0;

        for(int i=0;i<nums.length;i++){

            sum+=nums[i];

            int ava = sum%k;

            if(map.containsKey(ava)){

                if(i-map.get(ava)>=2) return true;
            }

            else {
                map.put(ava,i);
            }
        }

        return false;
        
    }
}