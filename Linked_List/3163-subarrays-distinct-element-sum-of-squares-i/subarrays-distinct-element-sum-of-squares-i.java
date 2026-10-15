class Solution {
    public int sumCounts(List<Integer> nums) {
        

        int ans=0;

        for(int i=0;i<nums.size();i++){

            Set<Integer> st = new HashSet<>();

            for(int j=i;j<nums.size();j++){

                    st.add(nums.get(j));

                    ans+=st.size()*st.size();
            }
        }
        return ans;
    }
}