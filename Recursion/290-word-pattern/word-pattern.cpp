class Solution {
public:
    bool wordPattern(string pattern, string s) {
        stringstream ss(s);
        unordered_map<char,string> mpChar;
        unordered_map<string,char> mpWord;
        vector<string> words;
        string w;
        while(ss>>w) words.push_back(w);
        if(words.size()!=pattern.size()) return false;
        for(int i=0;i<pattern.size();i++){
            char c = pattern[i];
            string word = words[i];
            if(mpChar.count(c)){
                 if(mpChar[c]!=word) return false;
            }
            else {
                if(mpWord.count(word)) return false;
                mpChar[c]=word;
                mpWord[word]=c;
            }
        }
        return true;
    }
};