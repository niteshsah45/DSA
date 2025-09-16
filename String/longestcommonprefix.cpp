#include<bits/stdc++.h>
using namespace std;
string longest(vector<string> str){
    sort(str.begin(),str.end());
    string s1=str[0];
    string s2=str[str.size()-1];
    string final="";
    for(int i=0;i<min(s1.length(),s2.length());i++){
        if(s1[i]==s2[i]){
            final+=s1[i];
        }
        else{
            break;
        }
    }
    return final;
}
int main(){
    int n;
    cin>>n;
    vector<string> str(n);
     for(int i=0;i<n;i++){
        cin>>str[i];
     }
     cout<<longest(str);
}