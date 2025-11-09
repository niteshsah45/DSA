#include<bits/stdc++.h>
using namespace std;
int intoDecimal(string& a){
    int num =0,p=1;
    int n = a.size();
    for(int i=n-1;i>=0;i--){
        if(a[i]=='1'){
            num+=p;
        }
        p=p*2;
    }
    return num;
}
string intoBinary(int num){
    string ans="";
    while(num>0){
        if(num%2==1){
            ans+='1';
        }
        else{
            ans+='0';
        }
        num/=2;
    }
    reverse(ans.begin(),ans.end());
    return ans;
}
    string addition(string a, string b) {
        int ans1= intoDecimal(a); 
        int ans2= intoDecimal(b);
        int result = ans1+ans2;

        return intoBinary(result);
    }
int main(){
    string a;
    string b;
    getline(cin,a);
    getline(cin,b);

    string ans = addition(a,b);
    cout<<ans;
}