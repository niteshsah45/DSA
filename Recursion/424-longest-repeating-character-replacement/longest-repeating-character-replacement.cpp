class Solution {
public:
    int characterReplacement(string s, int k) {
        int start=0;
        int end=0;
        int maxf=0;
        int maxLen=0;
        int hash[26]={0};
        for(int end=0;end<s.size();end++){
            hash[s[end]-'A']++;
            maxf= max(maxf,hash[s[end]-'A']);
            while((end-start+1)-maxf>k){
                hash[s[start]-'A']--;
                start++;
            }
            if((end-start+1)-maxf<=k){
                maxLen = max(maxLen,end-start+1);
            }
        }
        return maxLen;
        
    }
};