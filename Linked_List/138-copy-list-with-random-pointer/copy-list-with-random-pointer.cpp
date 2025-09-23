/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
void copyNode(Node* head){
    Node* temp=head;
    while(temp!=NULL){
        Node* resNode=new Node(temp->val);
        resNode->next=temp->next;
        temp->next=resNode;
        temp=temp->next->next;
    }
}
void randomLink(Node* head){
    Node* temp=head;
    while(temp!=NULL){
        Node* resNode= temp->next;
        if(temp->random){
            resNode->random=temp->random->next;
        }
        temp=temp->next->next;
    }
}
Node* connectRes(Node* head){
    Node* temp=head;
    Node* dummyNode= new Node(-1);
    Node* res=dummyNode;
    while(temp!=NULL){
        res->next=temp->next;
        temp->next=temp->next->next;

        res=res->next;
        temp=temp->next;
    }
    return dummyNode->next;
}
    Node* copyRandomList(Node* head) {
        if(head==NULL) return nullptr;
        copyNode(head);
        randomLink(head);
        return connectRes(head);
    }
};