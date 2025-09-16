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
    Node* prev=head;
    for(int i=1;i<arr.size();i++){
        Node* newNode= new Node(arr[i]);
        prev->next=newNode;
        newNode->back=prev;
        prev=newNode;
    }
    return head;

}
void printNode(Node* head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
Node* reverse2DLL(Node* head){
    Node* last=nullptr;
    Node* current=head;
    while(current!=NULL){
        last=current->back;
        current->back=current->next;
        current->next=last;
        current=current->back;
    }
    return last->back;


}
int main(){
    vector<int> arr={1,2,3,4,5};
    Node* head=convert2DLL(arr);
    head=reverse2DLL(head);
    printNode(head);
    return 0;
}