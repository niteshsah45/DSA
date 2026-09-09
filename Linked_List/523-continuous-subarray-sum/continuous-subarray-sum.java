class Solution {
    public boolean checkSubarraySum(int[] nums, int k) {


        HashMap<Integer,Integer> map = new HashMap<>();

        map.put(0,-1);

        int current=0;

        for(int i=0;i<nums.length;i++){

            current+=nums[i];

            int needed = current%k;

            if(map.containsKey(needed)){

                if(i-map.get(needed)>=2) return true;
            }
            else{

                map.put(needed,i);
            }
        }
        return false;
        
    }
}