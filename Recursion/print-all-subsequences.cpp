#include<bits/stdc++.h>
using namespace std;
void printSequence(int index,int arr[],vector<int>& ds,int n){
    if(index==n){
        for(auto it:ds){
            cout<<it<<" ";
        }
        if(ds.size()==0){
            cout<<"{}";
        }
        cout<<endl;
        return;
    }
    ds.push_back(arr[index]);
    printSequence(index+1,arr,ds,n);
    ds.pop_back();
    printSequence(index+1,arr,ds,n);
}
int main(){
    int n=3;
    int arr[n]={3,1,2};
    vector<int> ds;
    printSequence(0,arr,ds,n);
    return 0;
}