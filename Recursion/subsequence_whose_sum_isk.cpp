#include<bits/stdc++.h>
using namespace std;
void  findSumsequence(int index,int sumi,int sum,int arr[],int n,vector<int>& st,vector<vector<int>>& result){
    if(index==n){
        if(sumi==sum){
            result.push_back(st);
        }
        return;
    }
    st.push_back(arr[index]);
    findSumsequence(index+1,sumi+arr[index],sum,arr,n,st,result);
    st.pop_back();
    findSumsequence(index+1,sumi,sum,arr,n,st,result);
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