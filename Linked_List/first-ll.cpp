#include<bits/stdc++.h>
using namespace std;
struct Node{
    public:
    int data;
    Node* next;
    public:
    Node(int data1, Node* next1){
        data=data1;
        next=next1;
    }
};
int main(){
    vector<int> arr = {1,3,2,4};
    Node y = Node(arr[3],nullptr);
    cout<<y.data;
    cout<<endl;
    cout<<y.next;
}