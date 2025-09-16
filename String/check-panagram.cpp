#include<bits/stdc++.h>
using namespace std;
bool checkPanagram(string s){
    int n=s.size();
    vector<int> freq(26,0);
    for(int i=0;i<n;i++){
        if(s[i]!=' '){
            freq[s[i]-'a']++;
        }
    }
    for(int i=0;i<26;i++){
        if(s[i]-'a'==0) return false;
    }
    return true;
}
int main(){
    string s;
    getline(cin,s);
    bool result=checkPanagram(s);
    if(result) cout<<"It is panagram";
    else cout<<"It is not panagram";
}