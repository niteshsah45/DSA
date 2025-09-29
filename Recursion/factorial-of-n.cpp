#include<bits/stdc++.h>
using namespace std;
int factofN(int n){
    if(n==0) return 1;
    return n*factofN(n-1);
}
int main(){
    int n;
    cin>>n;
    int fact = factofN(n);
    cout<<fact;
    return 0;
}