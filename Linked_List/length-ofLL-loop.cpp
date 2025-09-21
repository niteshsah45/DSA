#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node* next;
    Node(int data1,Node* next1=nullptr){
        data=data1;
        next=next1;
    }
};
Node* convert2ll(vector<int>& arr){
    Node* head= new Node(arr[0]);
    Node* temp=head;
    unordered_map<int,Node*> store;
    store[arr[0]]=head;
    for(int i=1;i<arr.size();i++){
        Node* mover=new Node(arr[i]);
        temp->next=mover;
        temp=mover;
        store[arr[i]]=mover;
    }
    temp->next=store[3];
    return head;
};
int lengthOfll(Node* head){
    Node* temp=head;
    unordered_map<Node*,int> mpp;
    int size=0;
    int i=1;
    int firstVal;
    while(temp!=nullptr){
        if(mpp.find(temp)!=mpp.end()){
            return i-mpp[temp];
        }
        mpp[temp]=i++;
        temp=temp->next;
    }
    return 0;
};
int main(){
    vector<int> arr{1,2,3,4,5,6,7,8,9};
    Node* head=convert2ll(arr);
    int count=lengthOfll(head);
    cout<<count;
    return 0;
}