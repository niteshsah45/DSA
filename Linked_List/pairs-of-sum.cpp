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
Node* convert2LL(vector<int>& arr){
    Node* head = new Node(arr[0]);
    Node* prev=head;
    for(int i=1;i<arr.size();i++){
        Node* newNode = new Node(arr[i]);
        prev->next= newNode;
        prev= newNode;
    }
    return head;
};
vector<vector<int>> pairSum(Node* head,int key){
    Node* temp1=head;
    vector<vector<int>> result;
    while(temp1!=NULL){
        Node* temp2 = temp1->next;
        while(temp2!=NULL && temp1->data + temp2->data<=key){
            if(temp2->data+temp1->data==key){
                result.push_back({temp1->data,temp2->data});
            }
            temp2=temp2->next;
        }
        temp1=temp1->next;
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