#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node* next;

    Node(int data1, Node* next1=nullptr){
        data=data1;
        next=next1;
    }
};
Node* convert2LL(vector<int>& arr){
    Node* head= new Node(arr[0]);
    Node* prev=head;
    for(int i=1;i<arr.size();i++){
        Node* temp=new Node(arr[i]);
        prev->next=temp;
        prev=temp;
    }
    return head;
}
Node* sortNum(Node* head){
    Node* zeroNode= new Node(-1);
    Node* oneNode=new Node(-1);
    Node* twoNode=new Node(-1);
    Node* zero = zeroNode;
    Node* one = oneNode;
    Node* two = twoNode; 
    Node* temp=head;
    while(temp!=NULL){
        if(temp->data==0){
            zero->next= temp;
            zero=zero->next;
        }
        else if(temp->data==1){
            one->next=temp;
            one=one->next;
        }
        else{
            two->next=temp;
            two=two->next;
        }
        temp=temp->next;
    }
    zero->next = (oneNode->next) ? (oneNode->next):(twoNode->next);
    one->next=twoNode->next;
    two->next=NULL;
    Node* newNode=zeroNode->next;
    delete zeroNode;
    delete oneNode;
    delete twoNode;
    return newNode;
};
void printLL(Node* head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
};
int main(){
    vector<int> arr{1,0,2,1,0,0,1,2};
    Node* head= convert2LL(arr);
    head = sortNum(head);
    printLL(head);
}