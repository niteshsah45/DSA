class Solution {
public:
bool isPalin(string s,int start,int end){
    while(start<=end){
        if(s[start]!=s[end]) return false;
        start++;
        end--;
    }
    return true;
}
void palindromeString(int index,string s,vector<string>& subString,vector<vector<string>>& ans){
    if(index==s.size()){
        ans.push_back(subString);
        return;
    }

    for(int i=index;i<s.size();i++){
        if(isPalin(s,index,i)){
            subString.push_back(s.substr(index,i-index+1));
            palindromeString(i+1,s,subString,ans);
            subString.pop_back();
        }
    }
}
    vector<vector<string>> partition(string s) {
        vector<vector<string>> ans;
        vector<string> subString;
        palindromeString(0,s,subString,ans);
        return ans;
    }
};