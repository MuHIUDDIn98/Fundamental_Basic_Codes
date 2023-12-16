#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int value;
    Node *next;
    Node *prev;

    Node(int value)
    {
        this->value = value;
        this->next = NULL;
        this->prev = NULL;
    }
};

void print_link_list(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->value << " ";
        tmp = tmp->next;
    }
}

void reverse_print_link_list(Node *tail)
{
    Node *tmp = tail;
    while (tmp != NULL)
    {
        cout << tmp->value << " ";
        tmp = tmp->prev;
    }
}

int size(Node *head)
{
    int count = 0;
    Node *tmp = head;
    while (tmp != NULL)
    {
        count++;
        tmp = tmp->next;
    }
    return count;
}


void reverse(Node *head, Node *tail)
{
    Node *i = head;
    Node *j = tail;
    while (i != j && i->next != j)
    {
        swap(i->value, j->value);
        i = i->next;
        j = j->prev;
    }
    cout<<"Reversed"<<endl;
}

int main()
{

    Node *head = new Node(11);
    Node *a = new Node(12);
    Node *b = new Node(13);
    Node *c = new Node(14);
    Node *d = new Node(15);
    Node *e = new Node(16);

    head->next = a;
    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;

    a->prev = head;
    b->prev = a;
    c->prev = b;
    d->prev = c;
    e->prev = d;
    Node *tail = e;

    print_link_list(head);
    cout << endl;
    reverse_print_link_list(tail);
    cout << endl;
    cout << "size of link list :" << size(head) << endl;

    reverse(head,tail);
    
    print_link_list(head);
    cout << endl;
    reverse_print_link_list(tail);
    cout << endl;

    return 0;
}
