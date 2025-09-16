#include<bits/stdc++.h>
using namespace std;
char getMostOccurChar(string s){
    int arr[26]={0};
    int index=0;
    for(int i=0;i<s.length();i++){  
        if(s[i]>='a' && s[i]<='z'){
            index=s[i]-'a';
        }
        else{
            index=s[i]-'A';
        }
        arr[index]++;
    }
    int maxi=-1;
    int ans=-1;
    for(int i=0;i<26;i++){
        if(maxi<arr[i]){
            maxi=arr[i];
            ans=i;
        }
    }
    char ch= ans+'a';
    return ch;
    
}
int main(){
    string s;
    cin>>s;
    cout<<getMostOccurChar(s);
}