class Solution {
public:
bool isana(string a, string b){
    if(a.size()!=b.size()) return false;
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    return a==b;
}
    vector<string> removeAnagrams(vector<string>& words) {
        vector<string> result;
        for(auto& w:words){
            if(!result.empty() && isana(result.back(),w)){

            }
            else{
                result.push_back(w);
            }
        }
        return result;
    }
};