#include<bits/stdc++.h>
using namespace std;
bool ana(string str,string str1){
    vector<int> res(26,0);
    vector<int> result(26,0);
    for(int i=0;i<str.size();i++){
        int index=str[i]-'a';
        res[index]++;
    }
    int final=0;
    for(int i=0;i<26;i++){
        while(res[i]--){
            str[final]=i+'a';
            final++;
        }
    }
    for(int i=0;i<str1.size();i++){
        int index=str1[i]-'a';
        result[index]++;
    }
    int final1=0;
    for(int i=0;i<26;i++){
        while(result[i]--){
            str1[final1++]=i+'a';
        }
    }
    if(str==str1) return true;
    else return false;

}
int main(){
    string str,str1;
    cin>>str;
    cin>>str1;
    if(ana(str,str1)) cout<<"yes";
    else cout<<"no";

}