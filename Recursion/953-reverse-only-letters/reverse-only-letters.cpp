class Solution {
public:
    string reverseOnlyLetters(string s) {
        int n=s.size();
        int start=0;
        int end=n-1;
        while(start<end){
            if(!isalpha(s[start])){
                start++;
            }
            else if(!isalpha(s[end])){
                end--;
            }
            else{
                 swap(s[start],s[end]);
                start++;
                 end--;
            }
        }    
        return s;
    }
};