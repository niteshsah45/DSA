#include<bits/stdc++.h>
using namespace std;
void printsubSets(int index,int n,int arr[],int sum){
    if(index==n){
        cout<<sum<<" ";
        return;
    }
    printsubSets(index+1,n,arr,sum+arr[index]);
    printsubSets(index+1,n,arr,sum);
}
int main(){
    int n=3;
    int arr[n]={3,1,2};
    int sum =0;
    printsubSets(0,n,arr,sum);
}