#include<bits/stdc++.h>
using namespace std;
bool ana(string s1,string s2){
    if(s1.size()!=s2.size()) return false;

    vector<int> freq(26,0);
    for(char c:s1) freq[c-'a']++;
    for(char c:s2) freq[c-'a']--;
    for(int i=0;i<26;i++){
    if(freq[i]!=0) return false;
    }
    return true;
}
int main(){
    string s1,s2;
    cin>>s1>>s2;
    if(ana(s1,s2)) cout<<"Yes this is anagram";
    else cout<<"No this is not anagram";
    return 0;
}