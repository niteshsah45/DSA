class Solution {
    public int longestConsecutive(int[] nums) {

        int maxilen =0;

        HashSet<Integer> st = new HashSet<>();

        for(int x:nums) st.add(x);


        for(int x:nums){


            if(!st.contains(x-1)){

                int count =0;
                int start=x;

                while(st.contains(start)){
                   
                    int rm = start;
                     start++;

                    st.remove(rm);
                    count++;
                }

                 maxilen = Math.max(maxilen,count);
            }
        }

        return maxilen;
        
    }
}