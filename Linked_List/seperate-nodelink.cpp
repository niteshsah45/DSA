#include<bits/stdc++.h>
using namespace std;
struct Node{
    public:
    int data;
    Node* next;
    Node* back;
    Node(int data1,Node* next1=nullptr,Node* back1=nullptr){
        data=data1;
        next=next1;
        back=back1;
    }
};
Node* convert2DLL(vector<int>& arr){
    Node* head= new Node(arr[0]);
    Node* newNode=head;
    for(int i=1;i<arr.size();i++){
        Node* temp= new Node(arr[i]);
        newNode->next=temp;
        temp->back=newNode;
        newNode=temp;
    }
    return head;
};
Node* seprateEvenOdd(Node* head){
    Node* temp=head;
    int size=0;
    while(temp!=NULL){
        size++;
        temp=temp->next;
    }
    vector<int> arr(size);
     temp=head;
    int index=0;
    while(temp!=NULL){
        arr[index]=temp->data;
        if(temp->next) temp=temp->next->next;
        else break;
        index++;
    }
     temp=head->next;
     while(temp!=NULL){
        arr[index]=temp->data;
        if(temp->next) temp=temp->next->next;
        else break;
        index++;
     }
    temp=head;
    int i=0;
    while(temp!=NULL){
        temp->data=arr[i];
        temp=temp->next;
        i++;
    }
    if(temp) temp->data=arr[i];
    return head;
};
void printList(Node* head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
};
int main(){
    vector<int> arr{1,2,3,4,5,6};
    Node* head=convert2DLL(arr);
    head=seprateEvenOdd(head);
    printList(head);
}