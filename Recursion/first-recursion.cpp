#include<bits/stdc++.h>
using namespace std;
void print(int count){
    if (count==4) return;
    cout<<count<<endl;
    count++;
    print(count);
}
int main(){
    print(0);
    return 0;
}