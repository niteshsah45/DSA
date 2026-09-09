class Solution {
    public int subarraySum(int[] nums, int k) {


        HashMap<Integer,Integer> map = new HashMap<>();

        map.put(0,1);

        int ways=0;

        int current=0;
        for(int i=0;i<nums.length;i++){

                current+=nums[i];

                int needed = current-k;


                if(map.containsKey(needed)){

                    ways+=map.get(needed);
                }


                map.put(current,map.getOrDefault(current,0)+1);

        }

        return ways;
   
    }
}