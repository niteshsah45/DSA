#include<bits/stdc++.h>
using namespace std;
bool findSumsequence(int index,int sumi,int sum,int arr[],int n,vector<int>& st,vector<vector<int>>& result){
    if(index==n){
        if(sumi==sum){
            result.push_back(st);
            return true;
        }
        else return false;
    }
    st.push_back(arr[index]);
    if(findSumsequence(index+1,sumi+arr[index],sum,arr,n,st,result)==true) return true;
    st.pop_back();
    if(findSumsequence(index+1,sumi,sum,arr,n,st,result)==true) return true;
    return false;
}
int main(){
    int n=7;
    int sum=5;
    int sumi=0;
    int arr[n]={1,2,1,3,2,4,2};
    vector<int> st;
    vector<vector<int>> result;
    findSumsequence(0,sumi,sum,arr,n,st,result);
    for(auto x:result){
        for(auto y:x){
            cout<<y<<" ";
        }
        cout<<endl;
    }
    return 0;
}