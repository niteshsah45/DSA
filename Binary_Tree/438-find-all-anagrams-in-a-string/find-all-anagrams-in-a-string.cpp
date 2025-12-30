class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> ans;
        int n = s.size();
        int m = p.size();
        if(m>n) return ans;
        vector<int> freq(26,0);

        for(char ch:p){
            freq[ch-'a']++;
        }
        int left=0,right =0,matchedChar =0;
        while(right<n){

            if(freq[s[right]-'a']>0){
                matchedChar++;
            }
            freq[s[right]-'a']--;
            right++;

            if(right-left>m){
                if(freq[s[left]-'a']>=0){
                    matchedChar--;
                }
                freq[s[left]-'a']++;
                left++;
            }

            if(matchedChar == m){
                ans.push_back(left);
            }
        }
        return ans;

    }
};