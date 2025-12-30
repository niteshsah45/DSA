class Solution {
public:
bool checkanna(string& s1,string& s2){
    if(s1.size()!=s2.size()) return false;
    vector<int> freq(26,0);

    for(char ch:s1){
        freq[ch-'a']++;
    }
    for(char ch:s2){
        freq[ch-'a']--;
    }
    for(int i=0;i<freq.size();i++){
        if(freq[i]!=0) return false;
    }
    return true;
}
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans;
        int n = strs.size();
        vector<bool> used(n,false);
        for(int i=0;i<n;i++){
            if(used[i]) continue;
            vector<string> level;
            string s1 = strs[i];
            used[i]=true;
            level.push_back(s1);
            for(int j=i+1;j<n;j++){
                if(used[j]) continue;
                string s2 = strs[j];
                bool result = checkanna(s1,s2);
                if(result && !used[j]){
                    level.push_back(s2);
                    used[j]=true;
                }
            }
            ans.push_back(level);
        }
        return ans;
    }
};