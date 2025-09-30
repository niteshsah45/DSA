#include<bits/stdc++.h>
using namespace std;
int countSumsequence(int index,int sumi,int sum,int arr[],int n,vector<int>& st){
    if(index==n){
        return (sumi==sum) ? 1:0;
    }
    int l = countSumsequence(index+1,sumi+arr[index],sum,arr,n,st);
    int r = countSumsequence(index+1,sumi,sum,arr,n,st);
    return l+r;
}
int main(){
    int n=3;
    int sum=2;
    int sumi=0;
    int arr[n]={1,2,1};
    vector<int> st;
    vector<vector<int>> result;
    int count=countSumsequence(0,sumi,sum,arr,n,st);
    cout<<count;
    return 0;
}