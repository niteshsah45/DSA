class Solution {
public:
    bool isPalindrome(string s) {
        string ans="";
        int n=s.size();
        for(int i=0;i<n;i++){
            if(isalnum(s[i])){
                ans+=s[i];
            }
        }
        int n1=ans.size();
        for(int i=0;i<n1;i++){
            if(ans[i]>='A' && ans[i]<='Z'){
                ans[i]+=32;
            }
        }
        for(int i=0;i<n1;i++){
            if(ans[i]!=ans[n1-i-1]) return false;
        }
        return true;
    }
};