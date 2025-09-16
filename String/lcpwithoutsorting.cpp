#include<bits/stdc++.h>
using namespace std;
string longestcommonprefix(vector<string> &strs){
    string prefix=strs[0];
    
    for(int i=1;i<strs.size();i++){
        int j=0;
    while(j<prefix.size() && j<strs[i].size() && prefix[j]==strs[i][j]){

        j++;
    }
    prefix=prefix.substr(0,j);
    }
    return prefix;
}
int main(){
    int n;
    cin>>n;
    vector<string> strs(n);
    for(int i=0;i<n;i++){
        cin>>strs[i];
    }
    cout<<longestcommonprefix(strs);
    return 0;
}