#include<bits/stdc++.h>
using namespace std;
int printf1_N(int i,int n){
    if(n<=i) return 1;
    printf1_N(i,n-1);
    cout<<n<<endl;
}
int printfN_1(int i,int n){
    if(i>n) return 1;
    printfN_1(i+1,n);
    cout<<i<<endl;
}
int main(){
    int n;
    cin>>n;
    cout<<endl;
    printf1_N(0,n);
    cout<<endl;
    printfN_1(1,n);
    return 0;
}