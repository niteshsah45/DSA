#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node* next;
    Node* back;
    Node(int data1,Node* next1=nullptr,Node* back1=nullptr){
        data=data1;
        next=next1;
        back=back1;
    }
};
Node* convert2LL(vector<int>& arr){
    Node* head=new Node(arr[0]);
    Node* prev=head;
    for(int i=1;i<arr.size();i++){
        Node* temp=new Node(arr[i]);
        temp->back=prev;
        prev->next=temp;
        prev=temp;
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
int main(){
    vector<int> arr{1,2,0,1,2,2,1,0,0};
    Node* head=convert2LL(arr);
    prints(head);
}