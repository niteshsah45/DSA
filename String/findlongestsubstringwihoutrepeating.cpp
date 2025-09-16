// sliding windows 
#include<bits/stdc++.h>
using namespace std;
int windows(string s){
    int start=0;
    int end=0;
    int len=0;
    int size=s.size();
    vector<bool> result(256,0);
    while(end<size){
        // if repeated character is found 
        while(result[s[end]]){
            result[s[start]]=0;
            start++;
        }
        result[s[end]]=1;
        len=max(len,end-start+1);
          end++;
    }
    return len;

}
int main(){
    string s;
    cin>>s;
    cout<<windows(s);
    return 0;
}