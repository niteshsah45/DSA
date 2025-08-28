class Solution {
public:
string lowerCase(string s){
    int len=s.size();
    for(int i=0;i<len;i++){
        if(s[i]>='A' && s[i]<='Z'){
            s[i]+=32;
        }
    }
    return s;

}
    bool isPalindrome(string s) {
        int len=s.size();
        int j=0;
        for(int i=0;i<len;i++){
            if(isalnum(s[i])){
                s[j]=s[i];
                j++;
            }
        }
        s.resize(j);
        string result= lowerCase(s);
        int n=result.size();
        int st=0,e=n-1;
        while(st<e){
            if(result[st]!=result[e]) return false;
            else{
                st++;
                e--;
            }
        }
        return true;
    }
};