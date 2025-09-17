#include<bits/stdc++.h>
using namespace std;
struct Node{
    public:
    int data;
    Node* next;
    Node(int data1,Node* next1=nullptr){
        data=data1;
        next=next1;
    }
};
Node* convert2ll(vector<int>& arr){
    Node* head=new Node(arr[0]);
    Node* prev=head;
    for(int i=1;i<arr.size();i++){
        Node* temp=new Node(arr[i]);
        prev->next=temp;
        prev=temp;
    }
    return head;
}
Node* reverseLl(Node* head){
    Node* prev=NULL;
    Node* temp=head;
    while(temp!=NULL){
        Node* front = temp->next;
        temp->next=prev;
        prev=temp;
        temp=front;
    }
    return prev;
}
void printll(Node* head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
int main(){
    vector<int> arr{1,2,3,4,5};
    Node* head= convert2ll(arr);
    head=reverseLl(head);
    printll(head);
}