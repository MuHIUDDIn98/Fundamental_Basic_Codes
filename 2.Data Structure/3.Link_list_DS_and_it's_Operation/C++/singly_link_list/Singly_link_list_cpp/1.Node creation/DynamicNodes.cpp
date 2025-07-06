#include<bits/stdc++.h>
using namespace std;

class Node {
public:
    int value;
    Node *next;
    Node(int value) {
        this->value = value;
        this->next = NULL;
    }
};

int main() {
    Node *head = new Node(20);
    Node *a = new Node(30);
    Node *b = new Node(40);
    Node *c = new Node(60);
    head->next = a;
    a->next = b;
    b->next = c;

    Node *temp = head;

    while(temp != NULL) {
        cout << "Node Address: " << (uintptr_t)temp
             << ", Value: " << temp->value
             << ", Next Address: " <<  (uintptr_t)temp->next << endl;
        temp = temp->next;
    }

    return 0;
}
