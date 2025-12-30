class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> mp;

        for(string &s:strs){

            vector<int> freq(26,0);
            for(char ch:s){
                freq[ch-'a']++;
            }
            string keyval;
            for(int i=0;i<26;i++){
                keyval+=to_string(freq[i])+"#";
            }

            mp[keyval].push_back(s);
        }
        vector<vector<string>> ans;
        for(auto &p:mp){
            ans.push_back(p.second);
        }
        return ans;
        
    }
};