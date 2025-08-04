class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n=nums.size();
        if(n==0) return 0;
        int longest=1;
        unordered_set<int> st(nums.begin(),nums.end());
        for(int it:st){
            if(st.find(it-1)==st.end()){
                int current=it;
                int count=1;
                while(st.find(current+1)!=st.end()){
                    current++;
                    count++;
                }
                 longest=max(count,longest);
            }
           
        }
        return longest;
        
    }
};