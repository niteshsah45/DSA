#include<bits/stdc++.h>
using namespace std;
int occur(string main,string sub){
    int size=main.size();
    int index=main.rfind(sub);
    if(index!=string::npos){
        return index;
    }
    else return -1;

}
int main(){
    string st;
    cin>>st;
    string s;
    cin>>s;
    int result=occur(st,s);
    cout<<result;
}