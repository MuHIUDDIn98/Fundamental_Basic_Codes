#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int value;
    Node* next;

    Node(int value) {
        this->value = value;
        this->next = NULL;
    }
};

void insert_at_position(Node*& head, int pos, int value) {
    Node* newNode = new Node(value);

    if (pos == 1) {
        newNode->next = head;
        head = newNode;
        cout << "Inserted at position 1 (head)" << endl;
        return;
    }

    Node* tmp = head;
    for (int i = 0; i < pos - 1 && tmp != NULL; i++) {
        tmp = tmp->next;
    }

    if (tmp == NULL) {
        cout << "Invalid position (tmp == NULL)" << endl;
        return;
    }

    newNode->next = tmp->next;
    tmp->next = newNode;
    cout << "Inserted at position " << pos << endl << endl;
}

void print_linked_list(Node* head) {
    Node* tmp = head;
    while (tmp != NULL) {
        cout << tmp->value << " ";
        tmp = tmp->next;
    }
    cout << "\n\n";
}

void print_address_list(Node* head) {
    Node* tp = head;
    while (tp != NULL) {
        cout << tp << "  ";
        tp = tp->next;
    }
    cout << "\n\n";
}

int size(Node* head) {
    Node* tmp = head;
    int size = 0;
    while (tmp != NULL) {
        size++;
        tmp = tmp->next;
    }
    return size;
}

int main() {
    Node* head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);
    head->next->next->next->next = new Node(50);

    print_linked_list(head);
    print_address_list(head);
    cout << "Size of linked list: " << size(head) << endl;

    int position, value;
    cout << "Enter your position: ";
    cin >> position;
    cout << "Enter your value: ";
    cin >> value;

    if (position < 1 || position > size(head) + 1) {
        cout << "Invalid position" << endl;
    } else {
        insert_at_position(head, position, value);
        print_linked_list(head);
        cout << "Size of linked list: " << size(head) << endl;
        print_address_list(head);
    }

    return 0;
}
