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

// Insert at tail in O(1) time
void insertTail(Node*& head, Node*& tail, int val) {
    Node* newNode = new Node(val);
    if (head == NULL) {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
    cout << "Inserted at tail O(1)" << endl;
}

// Iterative printing
void printLinkedList(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->value << " ";
        temp = temp->next;
    }
    cout << endl;
}

// Recursive print
void printRecursively(Node* node) {
    if (node == NULL) return;
    cout << node->value << " ";
    printRecursively(node->next);
}

// Recursive reverse print
void printRecursivelyReverse(Node* node) {
    if (node == NULL) return;
    printRecursivelyReverse(node->next);
    cout << node->value << " ";
}

// Recursive reversal
void reverseList(Node*& head, Node* current) {
    if (current->next == NULL) {
        head = current;
        return;
    }
    reverseList(head, current->next);
    current->next->next = current;
    current->next = NULL;
}

// Optional: Delete the entire list to free memory
void deleteList(Node*& head) {
    while (head != NULL) {
        Node* temp = head;
        head = head->next;
        delete temp;
    }
}

int main() {
    Node* head = NULL;
    Node* tail = NULL;

    // Example: Create list dynamically using insertTail
    vector<int> values = {10, 20, 30, 40, 50};
    for (int val : values) {
        insertTail(head, tail, val);
    }

    cout << "\nOriginal Linked List: ";
    printLinkedList(head);

    if (head != NULL)
        reverseList(head, head);

    cout << "\nReversed Linked List: ";
    printLinkedList(head);

    cout << "\nRecursive Print: ";
    printRecursively(head);

    cout << "\nRecursive Reverse Print: ";
    printRecursivelyReverse(head);

    cout << endl;

    // Free memory
    deleteList(head);

    return 0;
}
