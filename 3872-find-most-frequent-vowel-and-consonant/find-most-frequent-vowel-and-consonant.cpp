class Solution {
public:
int checkFreq(string s){
    vector<int> freq(26,0);
    int n=s.size();
    for(int i=0;i<n;i++){
        freq[s[i]-'a']++;
    }
    int maxi=-1;
    for(int i=0;i<26;i++){
        if(maxi<freq[i]){
            maxi=freq[i];
        }
    }
    return maxi;

}
    int maxFreqSum(string s) {
        string vowelst;
        string constst;
        for(int i=0;i<s.size();i++){
            if(s[i]=='a' || s[i]=='e'|| s[i]=='i' || s[i]=='o'||s[i]=='u'){
                vowelst+=s[i];
            }
            else{
                constst+=s[i];
            }
        }
        int volCount=checkFreq(vowelst);
        int consCount=checkFreq(constst);
        int ans=volCount+consCount;
        return ans;

    }
};