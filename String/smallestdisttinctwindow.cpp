#include<bits/stdc++.h>
using namespace std;
string smallwindow(string s){
    vector<int>count(256,0);
    int start=0,end=0,len=s.size();
    int diff=0;
    //calculate the different character and store the count in diff
    while(end<s.size()){
        if(count[s[start]]==0){
             diff++;
        }

    }



}
int main(){
    string s;
    cin>>s;
    cout<<smallwindow(s);
    return 0;
}