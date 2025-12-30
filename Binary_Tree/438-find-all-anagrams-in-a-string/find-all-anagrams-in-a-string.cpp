class Solution {
public:
bool checkAnna(string& key,string& p){
    vector<int> freq(26,0);

    for(char ch:key){
        freq[ch-'a']++;
    }
    for(char ch:p){
        freq[ch-'a']--;
    }
    for(int x:freq){
        if(x!=0) return false;
    }
    return true;

}
    vector<int> findAnagrams(string s, string p) {
        int n1 = s.size();
        int n2 = p.size();
        int start =0;
        int end = n2-1;
        vector<int> ans;
        while(start<n1){
            string key = s.substr(start,n2);
            bool result = checkAnna(key,p);
            if(result){ 
                ans.push_back(start);

            }
            start++;
        }
        return ans;
    }
};