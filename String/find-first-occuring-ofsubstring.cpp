#include<bits/stdc++.h>
using namespace std;
int firstOccur(string s1,string s2){
    int n=s1.size();
    int m=s2.size();
    for(int i=0;i<n-m;i++){
        int first=i,second=0;
        while(second<m){
            if(s1[first]!=s2[second]) break;
            else{
                first++;
                second++;
            }
        }
        int final=first-second;
        if(final<m) return final;
    }
   
}
int main(){
    string s1,s2;
    cin>>s1;
    cin>>s2;
    int result= firstOccur(s1,s2);
    cout<<result;
}