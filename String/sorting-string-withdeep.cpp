#include<bits/stdc++.h>
using namespace std;
string sortString(string s){
    int n=s.size();
    vector<int> freq(26,0);
    for(int i=0;i<n;i++){
        freq[s[i]-'a']++;
    }
    string ans="";
    for(int i=0;i<26;i++){
        char c='a'+i;
        while(freq[i]){
            ans+=c;
            freq[i]--;
        }
    }
    return ans;
}
int main(){
    string s;
    getline(cin,s);
    string result = sortString(s);
    cout<<result;
}