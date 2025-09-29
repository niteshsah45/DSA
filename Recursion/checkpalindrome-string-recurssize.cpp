#include<bits/stdc++.h>
using namespace std;
bool checkPalin(string st,int i){
    int n=st.size();
    if(i>=n/2) return true;
    if(st[i]!=st[n-i-1]){
         return false;
    }
    return checkPalin(st,i+1);
}
int main(){
    string st;
    cin>>st;
    int n=st.size();
    bool result = checkPalin(st,0);
    if(result) cout<<st<<" is palindrome";
    else cout<<st<<" is not palindrome";
}