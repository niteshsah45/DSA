class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        int n=s.size();
        int pre=0,suf=1;
        vector<int> lps(n,0);
        while(suf<n){
            if(s[pre]==s[suf]){
                lps[suf]=pre+1;
                pre++;
                suf++;
            }
            else{
                if(pre==0){
                    lps[suf]=0;
                    suf++;
                }
                else{
                    pre=lps[pre-1];
                }
            }
        }
        int len=lps[n-1];
        return (len>0 && n%(n-len)==0);
    }
};