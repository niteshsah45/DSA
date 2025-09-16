#include<bits/stdc++.h>
using namespace std;
struct Node{
    public:
    int data;
    Node* next;
    public:
    Node(int data1, Node* next1){
        data=data1;
        next=next1;
    }
    Node(int data1){
        data=data1;
        next=nullptr;
    }
};
Node* convertarray2LL(vector<int>& arr){
    Node* head=new Node(arr[0]);
    Node* mover=head;
    for(int i=1;i<arr.size();i++){
        Node* temp= new Node(arr[i]);
        mover->next=temp;
        mover=temp;
    }
    return head;

}
int lengthofLL(Node* head){
    int count=0;
    Node* temp = head;
    while(temp){
        temp=temp->next;
        count++;
    }
    return count;
}
int searchinLL(Node* head,int val){
    Node* temp=head;
    while(temp){
        if(temp->data==val) return 1;
        temp=temp->next;
    }
    return 0;
}
Node* deleteHead(Node* head){ // deletion of head
    if(head==NULL) return head;
    Node* temp=head;
    head=head->next;
    delete temp;
    return head;
}
Node* deleteTail(Node* head){
    if(head==NULL || head->next==NULL) return NULL;
    Node* temp=head;
    while(temp->next->next!=NULL){
        temp=temp->next;
    }
    free(temp->next);
    temp->next=nullptr;
    return head;
}
int main(){
    vector<int> arr ={2,4,6,8};
    Node* head=convertarray2LL(arr);
    head= deleteTail(head);
    while(head){
        cout<<head->data<<" ";
        head=head->next;
    }
    //head= deleteHead(head);
    // while(head){
    //     cout<<head->data<<" ";
    //     //cout<<head->next<<" ";//printing the pointer address of upcoming nodes
    //     head=head->next;
    // }
    // cout<<endl;
    // cout<<lengthofLL(head)<<endl;
    // cout<<searchinLL(head,9);
}