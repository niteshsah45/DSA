class Solution {
public:
bool validPalin(string s,int left,int right){
    while(left<right){
        if(s[left]!=s[right]) return false;
        left++;
        right--;
    }
    return true;
}
    bool validPalindrome(string s) {
        int left=0,right=s.size()-1;
        while(left<right){
            if(s[left]!=s[right]){
                return validPalin(s,left+1,right) || validPalin(s,left,right-1);
            }
            left++;
            right--;
        }
        return true;
    }
};