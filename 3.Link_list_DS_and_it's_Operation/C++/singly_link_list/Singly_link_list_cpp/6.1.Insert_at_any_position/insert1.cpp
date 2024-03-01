#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int value;
    Node *next;

    Node(int value)
    {
        this->value = value;
        this->next = NULL;
    }
};

void insert_at_tail(Node *&head, int val)
{
    Node *newNode = new Node(val);

    if (head == NULL)
    {
        head = newNode;
        cout << "insteted at Head" << endl
             << endl
             << endl;
        return;
    }
    Node *tmp = head;
    while (tmp->next != NULL)
    {
        tmp = tmp->next;
    }
    tmp->next = newNode;
    cout << "Inserted at Tail" << endl
         << endl
         << endl;
}

void insert_at_position(Node *head, int pos, int value)
{
    Node *newNode = new Node(value); // put value to new node first..
    Node *tmp = head;                // take e tmporary node to take head address..
    for (int i = 1; i < pos - 1; i++)
    {
        tmp = tmp->next; // travarsing tmp to the (position -1)
    }
    // cout<<"newNode :"<<newNode<<endl;
    // cout<<"(positon-1) value :"<<tmp->value<<endl;
    // cout<<"(position -1) address :"<<tmp->next<<endl;
    newNode->next = tmp->next;
    // cout<<"newNode next address = (pos-1) :"<<newNode->next<<endl;
    tmp->next = newNode;
    // cout<<"(pos-1) new addrss :"<<tmp->next<<endl;
    cout << "Inserted at possition " << pos << endl
         << endl;
}

void print_Link_list(Node *head) // O(N)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->value << " ";
        tmp = tmp->next;
    }

    cout << endl
         << endl;
}

int size(Node *head)
{ // O(N)
    Node *tmp = head;
    int size = 0;
    while (tmp != NULL)
    {
        size++;
        tmp = tmp->next;
    }
    return size;
}

int main()
{
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);
    Node *d = new Node(50);
    head->next = a; // a's address assigning to head->next to connect head to a
    a->next = b;
    b->next = c;
    c->next = d;

    print_Link_list(head);
    insert_at_position(head, 3, 500);
    print_Link_list(head);
    insert_at_position(head, 3, 400);
    print_Link_list(head);
    int position, value;
    cout << "Enter your position: " << endl;
    cin >> position;
    cout << "Enter your value: " << endl;
    cin >> value;
    if (position > size(head))
    {
        cout << "Invalid positon" << endl;
    }
    else
    {
        insert_at_position(head, position, value);
        print_Link_list(head);
    }

    return 0;
}