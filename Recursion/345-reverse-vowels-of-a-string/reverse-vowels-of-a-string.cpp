class Solution {
public:
bool isVowel(char& s){
    if(s=='A' || s=='E' || s=='I' || s=='O' || s=='U' || s=='a' || s=='e' || s=='i' || s=='o' || s=='u'){
        return true;
    }
    return false;
}
    string reverseVowels(string s) {
        int start=0;
        int n=s.size();
        int end=n-1;
        while(start<end){
            if(isVowel(s[start]) && isVowel(s[end])){
                swap(s[start],s[end]);
                start++;
                end--;
            }
            else if(isVowel(s[start])){
                end--;
            }
            else if(isVowel(s[end])){
                start++;
            }
            else{
                start++;
                end--;
            }
        }
        return s;
        
    }
};