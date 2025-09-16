#include<bits/stdc++.h>
using namespace std;
int longestSuffixPreffix(string &s){
    int n=s.size();
    int len=0;
    for(int i=1;i<n;i++){
        string prefix=s.substr(0,i);
        string suffix=s.substr(n-i,i);
        if(prefix==suffix){
            len=i;
        }
    }
    return len;

}
int main(){
    string s;
    cin>>s;
    int result=longestSuffixPreffix(s);
    cout<<result;
}