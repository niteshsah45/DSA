class Solution {
public:
    string reverseWords(string s) {
        int n=s.size();
        stringstream ss(s);
        string word;
        vector<string> words;
        string ans;
        while(ss>>word){
            words.push_back(word);
        }
        
        for(int i=0;i<words.size();i++){
            string revword = words[i];
            reverse(revword.begin(),revword.end());
            ans+= revword;
            if(i+1<words.size()) ans+=" ";
        }
        return ans;
        
    }
};