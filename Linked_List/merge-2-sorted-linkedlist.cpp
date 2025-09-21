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
    for(int i=1;i<arr.size();i++){
        Node* mover=new Node(arr[i]);
        temp->next=mover;
        temp=mover;
    }
    return head;
}
Node* mergeLL(Node* head1,Node* head2){
    if(head1==NULL && head2==NULL) return nullptr;
    Node* temp1=head1;
    Node* temp2=head2;
    Node* dummy=new Node(-1);
    Node* temp=dummy;
    while(temp1!=NULL && temp2!=NULL){
        if(temp1->data < temp2->data){
            temp->next=temp1;
            temp=temp1;
            temp1=temp1->next;
        }
        else{
            temp->next=temp2;
            temp=temp2;
            temp2=temp2->next;
        }
    }
    while(temp1!=NULL){
        temp->next=temp1;
        temp=temp1;
        temp1=temp1->next;
    }
    while(temp2!=NULL){
        temp->next=temp2;
        temp=temp2;
        temp2=temp2->next;
    }
    Node* head=dummy->next;
    return head;
};
void printsll(Node* head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
int main(){
    vector<int> arr1{2,4,5,8};
    vector<int> arr2{1,3,7,9,11,14};
    Node* head1=convert2ll(arr1);
    Node* head2=convert2ll(arr2);
    Node* head=mergeLL(head1,head2);
    printsll(head);
}