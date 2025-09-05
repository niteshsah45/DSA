class Solution {
public:
int checkPrefixSuffix(string &s,vector<int>& lps){
    int n=s.size();
    int pre=0,suf=1;
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
    return lps.back();
}
    string longestPrefix(string s) {
        int n=s.size();
        vector<int> lps(n,0);
        int result=checkPrefixSuffix(s,lps);
        return s.substr(0,result);
    }
};