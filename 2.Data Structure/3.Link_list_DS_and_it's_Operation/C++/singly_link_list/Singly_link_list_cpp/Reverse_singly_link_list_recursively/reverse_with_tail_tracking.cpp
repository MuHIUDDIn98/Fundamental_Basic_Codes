#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int value;
    Node *next; // self referencial poiniter..
    Node() {}
    Node(int value)
    {
        this->value = value;
        this->next = NULL;
    }
};

void insert_tail(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val); // o(1)
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
    cout << "Inserted at tail O(1)" << endl;
}

void print_Link_list(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->value << " ";
        tmp = tmp->next;
    }
}

void print_recursively(Node *n)
{
    if (n == NULL)
        return;
    cout << n->value << " ";
    print_recursively(n->next);
}

void reverse_linked_list(Node *&head, Node *&tail, Node *tmp)
{

    if (tmp->next == NULL)
    {
        cout << "reached last node :";
        cout << tmp->value << endl;
        head = tmp;
        return;
    }
    reverse_linked_list(head, tail, tmp->next);

    tmp->next->next = tmp;
    tmp->next = NULL;
    tail = tmp;
}

int main()
{

    Node *head = NULL;
    Node *tail = NULL;
    int input;
    while (true)
    {
        cin >> input;
        if (input == -1)
            break;
        insert_tail(head, tail, input);
    }

    cout << "Link_List " << endl;

    print_Link_list(head);
    cout << endl;
    print_recursively(head);
    cout << endl;

    cout << "Print Head and tail" << endl;
    cout << head->value << endl;
    cout << tail->value << endl;

    cout << "After reverse link list" << endl;
    reverse_linked_list(head, tail, head);
    print_Link_list(head);
    cout << endl;
    print_recursively(head);
    cout << endl;
    cout << "Print Head and tail" << endl;
    cout << head->value << endl;
    cout << tail->value << endl;

    return 0;
}