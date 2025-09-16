#include<bits/stdc++.h>
using namespace std;
bool ana(string str,string str1){
    if(str.size()!= str1.size()) return false;
    sort(str.begin(),str.end());
    sort(str1.begin(),str1.end());
    return str==str1;
}
int main(){
    string str,str1;
    cin>> str>>str1;
    if(ana(str,str1)) cout<<"Yes";
    else cout<<"No";
    return 0;
}