class Solution {
    public int missingInteger(int[] nums) {

        int presum =nums[0];
        int n = nums.length;
        int len=1;

        Set<Integer> st = new HashSet<>();
        for(int x:nums) st.add(x);
        //int maxi = Collections.max(st);

        for(int i=1;i<n;i++){

            if(nums[i-1]+1==nums[i]){
                presum+=nums[i];
            }
            else{
               break;
            }
        }
         while(true){
                    if(!st.contains(presum)) return presum;
                    presum++;
                }
        
    }
}