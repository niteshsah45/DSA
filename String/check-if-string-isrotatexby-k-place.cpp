#include<bits/stdc++.h>
using namespace std;
bool checkRotation(string s1,string s2,int k){
    int n1=s1.size();
    int n2=s2.size();
    string right="",left="";
    if(n1!=n2) return false;
    //anticloclwise;
    left=s1.substr(k,n1-k)+s1.substr(0,k); //extract after k upto n and add 0 to k char
    //cloclwise
    right=s1.substr(n1-k,k)+s1.substr(0,n1-k);
    if((left==s2) || (right==s2)) return true;
    else return false; 
}
int main(){
    string s1,s2;
    int k;
    cin>>s1;
    cin>>s2;
    cin>>k;
    bool result= checkRotation(s1,s2,k);
    if(result) cout<<"They are equals";
    else cout<<"They are not equals";
}