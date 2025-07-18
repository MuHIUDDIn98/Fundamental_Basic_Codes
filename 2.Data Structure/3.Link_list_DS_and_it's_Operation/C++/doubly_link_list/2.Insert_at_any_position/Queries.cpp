#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int value;
    Node *next;
    Node *prev;
    Node(int value) {
        this->value = value;
        this->next = NULL;
        this->prev = NULL;
    }
};

void print_link_list(Node *head) {
    cout << "L -> ";
    Node *tmp = head;
    while (tmp != NULL) {
        cout << tmp->value << " ";
        tmp = tmp->next;
    }
}

void reverse_print_link_list(Node *tail) {
    cout << "R -> ";
    Node *tmp = tail;
    while (tmp != NULL) {
        cout << tmp->value << " ";
        tmp = tmp->prev;
    }
}

void print_both(Node *head, Node *tail) {
    print_link_list(head);
    cout << endl;
    reverse_print_link_list(tail);
    cout << endl;
}

int size(Node *head) {
    int count = 0;
    Node *tmp = head;
    while (tmp != NULL) {
        count++;
        tmp = tmp->next;
    }
    return count;
}

void insert_at_head(Node *&head, Node *&tail, int val) {
    Node *newNode = new Node(val);
    if (head == NULL) {
        head = newNode;
        tail = newNode;
        return;
    }
    newNode->next = head;
    head->prev = newNode;
    head = newNode;
}

void insert_at_tail(Node *&head, Node *&tail, int val) {
    Node *newNode = new Node(val);
    if (head == NULL) {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;
}

void insert_at_position(Node *&head, Node *&tail, int pos, int val) {
    if (pos > size(head)) {
        cout << "Invalid" << endl;
        return;
    } else if (pos == size(head)) {
        insert_at_tail(head, tail, val);
    } else if (pos == 0) {
        insert_at_head(head, tail, val);
    } else {
        Node *newNode = new Node(val);
        Node *tmp = head;
        for (int i = 0; i < pos - 1; i++) {
            tmp = tmp->next;
        }
        newNode->next = tmp->next;
        tmp->next->prev = newNode;
        tmp->next = newNode;
        newNode->prev = tmp;
    }
    print_both(head, tail);
}

int main() {

    // Write your code here
    Node *head = NULL;
    Node *tail = NULL;

    int Q;
    cin >> Q;
    int pos, val;
    while (Q--) {
        cin >> pos >> val;
        insert_at_position(head, tail, pos, val);
    }

    return 0;
}
