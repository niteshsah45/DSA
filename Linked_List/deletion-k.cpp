#include<bits/stdc++.h>
using namespace std;
struct Node{
    public:
    int data;
    Node* next;
    public:
    Node(int data1,Node* next1=nullptr){
        data=data1;
        next=next1;
    }
};
Node* convert2ll(vector<int>& arr){
    Node* head=new Node(arr[0]);
    Node* mover=head;
    for(int i=1;i<arr.size();i++){
        Node* temp=new Node(arr[i]);
        mover->next=temp;
        mover=temp;
    }
    return head;
}
Node* deleteKth(Node* head,int k){
    if(head==NULL) return NULL;
    int count=0;
    Node* dummy=new Node(-1);
    dummy->next=head;
    Node* previous=dummy;
    Node* temp=head;
    while(temp!=NULL){
        count++;
        if(count==k){
            previous->next=temp->next;
            delete temp;
            break;
        }
        previous=temp;
        temp=temp->next;
    }
    head=dummy->next;
    delete dummy;
    return head;

}
void print(Node* head){
    Node* temp=head;
    while(temp){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}

int main(){
    vector<int> arr={2,4,6,8};
    Node* head= convert2ll(arr);
    head = deleteKth(head,3);
    print(head);
}