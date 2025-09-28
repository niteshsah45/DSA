#include<bits/stdc++.h>
using namespace std;
int sumofNum(int num){
    if(num==6) return 0;
    int val = sumofNum(num+1);
    return num+val;
}
int main(){
    int total=sumofNum(0);
    cout<<total;
    return 0;
}