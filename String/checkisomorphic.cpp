#include<bits/stdc++.h>
using namespace std;
bool iso(string s1,string s2){
    int size=s1.size();
    vector<int> v1(128,-1);
    vector<int> v2(128,-1);
    if(s1.size()!=s2.size()) return false;

    for(int i=0;i<size;i++){
        if(v1[s1[i]]!=v2[s2[i]]){
            return false;
        }
        v1[s1[i]]=v2[s2[i]]=i;
    }
    return true;
}
int main(){
    string s1,s2;
    cin>>s1>>s2;
    if(iso(s1,s2)) cout<<"Yes these word is isomorphic";
    else cout<<"No these word is not isomorphic";
    return 0;
}