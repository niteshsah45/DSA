#include<bits/stdc++.h>
using namespace std;
int sumofN(int n){
    if(n==1) return 1;
    int val = sumofN(n-1);
    return val+n; 
}
int main(){
    int n;
    cin>>n;
    int total = sumofN(n);
    cout<<total;
    return 0;
}