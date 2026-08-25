class Solution {
    public int missingMultiple(int[] nums, int k) {

        int n = nums.length;
        HashSet<Integer> st = new HashSet<>();
        for(int x:nums) st.add(x);
        int i=1;

        while(true){

            
            if(!st.contains(i) && i%k==0) return i;
            i++;
        }
    }
}