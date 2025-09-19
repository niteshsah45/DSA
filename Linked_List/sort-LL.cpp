#include<bits/stdc++.h>
using namespace std;
struct Node{
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
    Node* prev=head;
    for(int i=1;i<arr.size();i++){
        Node* temp=new Node(arr[i]);
        prev->next=temp;
        prev=temp;
    }
    return head;

};
Node* sortll(Node* head){
    Node* temp=head;
    int count=0;
    while(temp!=NULL){
        count++;
        temp=temp->next;
    }
    temp=head;
    int i=0;
    vector<int> result(count);
    while(temp!=NULL && i<count){
        result[i]=temp->data;
        temp=temp->next;
        i++;
    }
    sort(result.begin(),result.end());
    temp=head;
    int j=0;
    while(temp!=NULL && j<count){
        temp->data=result[j];
        temp=temp->next;
        j++; 
    }
    return head;
};
void printll(Node* head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
int main(){
    vector<int> arr{5,7,4,-1,0,3};
    Node* head= convert2ll(arr);
    head = sortll(head);
    printll(head);
}