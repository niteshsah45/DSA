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
Node* convert2LL(vector<int>& arr){
    Node* head= new Node(arr[0]);
    Node* temp=head;
    for(int i=1;i<arr.size();i++){
        Node* mover=new Node(arr[i]);
        temp->next=mover;
        temp=mover;
    }
    return head;
};
void prints(Node* head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
int addRecursive(Node* temp){
    if(temp==NULL){
        return 1;
    }
    int carry=addRecursive(temp->next);
    temp->data=temp->data+carry;
    if(temp->data<10){
        return 0;
    }
    temp->data=0;
    return 1;
}
int main(){
    vector<int> arr{9,1,7,9};
    Node* head= convert2LL(arr);
    int carry=addRecursive(head);
    if(carry){
        Node* newNode=new Node(1);
        newNode->next=head;
        head=newNode;
    }

    prints(head);
}