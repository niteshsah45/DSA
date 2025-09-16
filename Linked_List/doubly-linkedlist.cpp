#include<bits/stdc++.h>
using namespace std;
struct Node{
    public:
    int data;
    Node* next;
    Node* back;
    public:
    Node(int data1,Node* next1=nullptr,Node* back1=nullptr){
        data=data1;
        next=next1;
        back=back1;
    }
};
Node* convertArr2DLL(vector<int>& arr){
    Node* head=new Node(arr[0]);
    Node* prev=head;
    for(int i=1;i<arr.size();i++){
        Node* temp= new Node(arr[i]);
        prev->next=temp;
        temp->back=prev;
        prev=temp;
    }
    return head;
}
void prints(Node* head){
    while(head!=NULL){
        cout<<head->data<<" ";
        head=head->next;
    }
}
Node* deleteHead(Node* head){
    if(head==NULL || head->next==NULL){
        return NULL;
    }
    Node* prev=head;
    head=head->next;
    head->back=nullptr;
    prev->next=nullptr;

    delete prev;
    return head;
}
Node* deleteTail(Node* head){
    if(head==NULL || head->next==NULL){
        return NULL;
    }
    Node* tail=head;
    while(tail->next!=NULL){
        tail=tail->next;
    }
    Node* newNode = tail->back;
    newNode->next=nullptr;
    tail->back=nullptr;
    delete tail;
    return head;
}
Node* kthElement(Node* head,int k){
    if(head==NULL){
        return NULL;
    }
    Node* temp=head;
    int count=0;
    while(temp!=NULL){
         count++;
        if(k==count) break;
        temp=temp->next;
    }
    Node* prev=temp->back;
    Node* front=temp->next;
    if(prev==NULL && front==NULL){
        return NULL;
    }
    else if(prev==NULL){
        return deleteHead(head);
    }
    else if(front==NULL){
        return deleteTail(head);
    }
    prev->next=front;
    front->back=prev;
    temp->next=nullptr;
    temp->back=nullptr;
    delete temp;
    return head;

}
Node* deleteNode(Node* temp){
    Node* prev=temp->back;
    Node* front=temp->next;
    
}
Node* insertHead(Node* head,int val){
    Node* newnode= new Node(val,head,nullptr);
    return newnode;

}
int main(){
    vector<int> arr{5,8,12,5,7};
    Node* head= convertArr2DLL(arr);
    // head=deleteHead(head);
    // head=deleteTail(head);
    // head=kthElement(head,3);
    head=insertHead(head,7);
    prints(head);
}