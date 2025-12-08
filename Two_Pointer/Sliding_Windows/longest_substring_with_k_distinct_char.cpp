#include<bits/stdc++.h>
using namespace std;
int longestSubstring(string& s,int k){
    int n=s.size();
    map<char,int> mpp;
    int start=0;
    int end=0;
    int maxiLen=0;
    while(end<s.size()){
        mpp[s[end]]++;
            while(mpp.size()>k){
                mpp[s[start]]--;
                if(mpp[s[start]]==0){
                    mpp.erase(mpp[s[start]]);
                }
                start++;
            }
            maxiLen = max(maxiLen,end-start+1);
            end++;
    }
    return maxiLen;
}
int main(){
    string s;
    cin>>s;
    int k;
    cin>>k;
    int result = longestSubstring(s,k);
    cout<<result;
    return 0;
}