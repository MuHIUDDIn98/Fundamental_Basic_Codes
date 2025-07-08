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
    Node *tmp = head;
    while (tmp != NULL) {
        cout << tmp->value << " ";
        tmp = tmp->next;
    }
    cout << endl;
}

void reverse_print_link_list(Node *tail) {
    Node *tmp = tail;
    while (tmp != NULL) {
        cout << tmp->value << " ";
        tmp = tmp->prev;
    }
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

void delete_at_tail(Node *&head, Node *&tail) {
    if (!tail) return;
    Node *delNode = tail;
    if (head == tail) {
        head = tail = NULL;
    } else {
        tail = tail->prev;
        tail->next = NULL;
    }
    delete delNode;
}

void delte_at_head(Node *&head, Node *&tail) {
    if (!head) return;
    Node *delNode = head;
    if (head == tail) {
        head = tail = NULL;
    } else {
        head = head->next;
        head->prev = NULL;
    }
    delete delNode;
}

void delte_at_position(Node *&head, Node *&tail, int pos) {
    int n = size(head);
    if (pos < 0 || pos >= n) {
        cout << "Invalid position" << endl;
        return;
    }
    if (pos == 0) {
        delte_at_head(head, tail);
        return;
    }
    if (pos == n - 1) {
        delete_at_tail(head, tail);
        return;
    }

    Node *tmp = head;
    for (int i = 0; i < pos - 1; i++) {
        tmp = tmp->next;
    }
    Node *deleteNode = tmp->next;
    tmp->next = deleteNode->next;
    deleteNode->next->prev = tmp;
    delete deleteNode;
}

int main() {
    Node *head = new Node(11);
    Node *a = new Node(12);
    Node *b = new Node(13);
    Node *c = new Node(14);
    Node *d = new Node(15);
    Node *e = new Node(16);

    head->next = a; a->prev = head;
    a->next = b; b->prev = a;
    b->next = c; c->prev = b;
    c->next = d; d->prev = c;
    d->next = e; e->prev = d;
    Node *tail = e;

    print_link_list(head);
    reverse_print_link_list(tail);
    cout << "Size of linked list: " << size(head) << endl;

    int input;
    while (true) {
        cout << "To exit press '0', to delete press '1': ";
        cin >> input;
        if (input == 1) {
            cout << "Enter your desired position to delete: ";
            int pos;
            cin >> pos;
            delte_at_position(head, tail, pos);
            print_link_list(head);
            reverse_print_link_list(tail);
        } else if (input == 0) {
            break;
        }
    }

    // Cleanup remaining nodes
    while (head != NULL) {
        delte_at_head(head, tail);
    }

    return 0;
}
