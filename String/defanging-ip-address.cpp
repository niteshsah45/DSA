#include<bits/stdc++.h>
using namespace std;
string defangingIp(string s){
    int n=s.size();
    string temp="";
    string result="";
    for(int i=0;i<n;i++){
        if(s[i]!='.'){
            temp+=s[i];
        }
        else{
            temp+="[.]";
        }
    }
    return temp;
}
int main(){
    string s;
    cin>>s;
    string result = defangingIp(s);
    cout<<result;
}