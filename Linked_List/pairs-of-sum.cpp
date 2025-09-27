#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node* next;
    Node* back;
    public:
    Node(int data1,Node* next1=nullptr,Node* back1=nullptr){
        data=data1;
        next=next1;
        back= back1;
    }
};
Node* convert2LL(vector<int>& arr){
    Node* head = new Node(arr[0]);
    Node* prev=head;
    for(int i=1;i<arr.size();i++){
        Node* newNode = new Node(arr[i]);
        newNode->back= prev;
        prev->next= newNode;
        prev= newNode;
    }
    return head;
};
vector<vector<int>> pairSum(Node* head,int key){
    Node* left=head;
    Node* right=head;
    while(right->next!=NULL){
        right=right->next;
    }
    vector<vector<int>> result;
    while(left->data<right->data){
        if(left->data+right->data==key){
            result.push_back({left->data,right->data});
            left=left->next;
            right=right->back;
        }
        else if(left->data+right->data>key){
            right=right->back;
        }
        else{
            left=left->next;
        }
    }

    return result;
}
void print(Node* head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
int main(){
    vector<int> arr{1,2,3,4,6,7,8,9};
    Node* head = convert2LL(arr);
    vector<vector<int>> store = pairSum(head,7);
    for(int i=0;i<store.size();i++){
        for(int j=0;j<store[0].size();j++){
            cout<<store[i][j]<<" ";
        }
        cout<<endl;
    }
}