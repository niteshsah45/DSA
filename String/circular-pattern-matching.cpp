#include<bits/stdc++.h>
using namespace std;
bool checkSubstring(string &s1,string &s2){
    int n1=s1.size();
    int n2=s2.size();
    string final=s1+s1;
    int n3=final.size();
    vector<int> lps(n2,0);
    int pre=0,suf=1;
    while(suf<n2){
        if(s2[pre]==s2[suf]){
            lps[suf]=pre+1;
            pre++;
            suf++;
        }
        else{
            if(pre==0){
                lps[suf]=0;
                suf++;
            }
            else{
                pre=lps[pre-1];
            }
        }
    }
    int first=0,second=0;
    while(second<n2){
        if(final[first]==s2[second]){
            first++;
            second++;
        }
        else{
            if(second==0){
                first++;
            }
            else{
                second=lps[second-1];
            }

        }
    }
    if(second==n2) return true;
    else return false;
}
int main(){
    string s1,s2;
    cin>>s1>>s2;
    bool result= checkSubstring(s1,s2);
    if(result) cout<<s2<< " is present in "<<s1;
    else cout<<s2<< " isnt present in "<<s1;
}