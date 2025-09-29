#include<bits/stdc++.h>
using namespace std;
void printf1_N(int count){
    if(count==11) return;
    cout<<count<<endl;
    count++;
    printf1_N(count);
}
void printN_1(int count){
    if(count==0) return;
    cout<<count<<endl;
    count--;
    printN_1(count);
}
int main(){
    printf1_N(1);
    printN_1(10);
    return 0;
}