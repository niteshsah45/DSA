#include<bits/stdc++.h>
using namespace std;
   string sortVowels(string s) {
        int n=s.size();
        vector<int> freq(52,0);
        for(int i=0;i<n;i++){
            if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'){
                freq[s[i]-'a']++;
                s[i]='#';
            }
            else if(s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U'){
                freq[s[i]-'A']++;
                s[i]='#';
            }
        }
        string ans="";
        for(int i=0;i<26;i++){
            char c='A'+i;
            while(freq[i]){
                ans+=c;
                freq[i]--;
            }
        }
        for(int i=0;i<26;i++){
            char c='a'+i;
            while(freq[i]){
                ans+=c;
                freq[i]--;
            }
        }
        string result="";
        int len=ans.size();
        int j=0;
        for(int i=0;i<n && j<len;i++){
            if(s[i]=='#'){
                result+=ans[j];
                j++;
            }
            else{
                result+=s[i];
            }
        }
        return result;
    }
int main(){
    string s;
    cin>>s;
    string result= sortVowels(s);
    cout<<result;
}