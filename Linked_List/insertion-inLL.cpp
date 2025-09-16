#include<bits/stdc++.h>
using namespace std;
struct Node{
    public:
    int data;
    Node* next;
    public:
    Node(int data1,Node* next1){
        data=data1;
        next=next1;
    }
    Node(int data1){
        data=data1;
        next=nullptr;
    }
};
Node* convert2LL(vector<int>& arr){
    Node* head= new Node(arr[0]);
    Node* mover=head;
    for(int i=1;i<arr.size();i++){
        Node* temp=new Node(arr[i]);
        mover->next=temp;
        mover=temp;
    }
    return head;
}
Node* insertLL(Node* head,int val){
    Node* dummy= new Node(val,head);
    return dummy;
}
void printLL(Node* head){
    Node* temp=head;
    while(temp){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
Node* insertLLtail(Node* head,int val){
    if(head==NULL) return new Node(val);
    Node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=new Node(val);
    return head;
}
Node* insertatKth(Node* head, int k,int val){
    if(k==1){
        Node* dummy= new Node(val,head);
        return dummy;
    }
    Node* temp=head;
    int count=0;
    while(temp!=NULL){
        count++;
        if(count==k-1){
            Node* x=new Node(val,temp->next);
            temp->next=x;
            break;
        }
        temp=temp->next;
    }
    return head;
}
Node* insertEl(Node* head,int el,int val){ // inserting given element before given value
    if(head==NULL) return NULL;
    if(head->data==val){
        Node* temp=new Node(el,head);
        return temp;
    }
    Node* temp=head;
    while(temp->next!=NULL){
        if(temp->next->data==val){
            Node* x=new Node(el,temp->next);
            temp->next=x;
            break;
        }
        temp=temp->next;
    }
    return head;

}

int main(){
    vector<int> arr={3,4,6,8};
    Node* head= convert2LL(arr);
    // head= insertLL(head,13);
    // head= insertLLtail(head,13);
    // head= insertatKth(head,3,19);
    head = insertEl(head,10,8);
    printLL(head);
}