#include<bits/stdc++.h>
using namespace std;
void reverseArr(int arr[],int i,int n){
    if(i>=n/2) return;
    swap(arr[i],arr[n-1-i]);
    reverseArr(arr,i+1,n);
}
int main(){
    int arr[5]={1,2,3,4,5};
    reverseArr(arr,0,5);
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}