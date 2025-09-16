
#include<bits/stdc++.h>
using namespace std;
string sortString(string s1){
    int n=s1.size();
    vector<int> freq(26,0);
    for(int i=0;i<n;i++){
        int index=s1[i]-'a';
        freq[index]++;
    }
    int j=0;
    for(int i=0;i<26;i++){
        while(freq[i]--){
            s1[j]=i+'a';
            j++;
        }
    }
    return s1;
}
int main(){
    string s1;
    cin>>s1;
    string result=sortString(s1);
    cout<<result;
}
