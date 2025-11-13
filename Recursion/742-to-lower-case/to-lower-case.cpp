class Solution {
public:
    string toLowerCase(string s) {
        for(int i=0;i<s.size();i++){
            if(s[i]<=90 && isalpha(s[i]) ){
                s[i]=(s[i]+32);
            }
        }
        return s;
    }
};