#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;   // horizontal
    Node* child;  // vertical
    Node(int v) : data(v), next(nullptr), child(nullptr) {}
};

// Print multilevel list (for debugging)
void printMultilevel(Node* head) {
    Node* cur = head;
    while (cur) {
        cout << cur->data;
        if (cur->child) {
            cout << " [child: ";
            Node* c = cur->child;
            while (c) {
                cout << c->data;
                if (c->next) cout << " -> ";
                c = c->next;
            }
            cout << "]";
        }
        if (cur->next) cout << " -> ";
        cur = cur->next;
    }
    cout << " -> NULL\n";
}

int main() {
    // Step 1: Top-level
    Node* n1 = new Node(5);
    Node* n2 = new Node(10);
    Node* n3 = new Node(19);
    Node* n4 = new Node(28);

    n1->next = n2;
    n2->next = n3;
    n3->next = n4;

    // Step 2: Child of 5
    Node* c1 = new Node(7);
    Node* c2 = new Node(8);
    Node* c3 = new Node(30);
    n1->child = c1;
    c1->next = c2;
    c2->next = c3;

    // Step 3: Child of 10
    Node* d1 = new Node(20);
    n2->child = d1;

    // Step 4: Child of 19
    Node* e1 = new Node(22);
    Node* e2 = new Node(50);
    n3->child = e1;
    e1->next = e2;

    // Step 5: Child of 28
    Node* f1 = new Node(35);
    Node* f2 = new Node(40);
    n4->child = f1;
    f1->next = f2;

    // Print structure
    printMultilevel(n1);

    return 0;
}
