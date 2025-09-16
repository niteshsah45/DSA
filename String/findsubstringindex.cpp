#include<bits/stdc++.h>
using namespace std;
void subindex(string str1,string str2){
    int n=str1.size();
    vector<int> store;
    int index=str1.find(str2);
    while(index!=string::npos){
        store.push_back(index);
        index=str1.find(str2,index+1);
    }
    int maxi=0;
     for(auto it:store){
        maxi=max(maxi,it);
     }
     cout<<maxi;
    
}
int main(){
    string str1="sabnodsabrotysab";
    string str2="sab";
    subindex(str1,str2);
}