class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.size();
        if(n==0) return 0;
        unordered_set<char> seen;
        int left=0,maxi=0;
        for(int right=0;right<n;right++){
            while(seen.count(s[right])){
                seen.erase(s[left]);
                left++;
            }
            seen.insert(s[right]);
            maxi=max(maxi,right-left+1);
        }
        return maxi;

    }
};