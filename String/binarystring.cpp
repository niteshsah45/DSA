#include<bits/stdc++.h>
using namespace std;
int binarycount(string st,int k){
    int start=0;
    int end=0;
    int max_len=0;
    int zero=0;
    for(;end<st.length();end++){
        if(st[end]=='0'){
            zero++;
        }
        while(zero>k){
            if(st[start++]=='0'){
                zero--;
            }
        }
        max_len=max(max_len,end-start+1);

    }
    return max_len;
}
int main(){
    string str;
    cin>>str;
    int k;
    cin>>k;
    cout<<binarycount(str,k);
    return 0;
}