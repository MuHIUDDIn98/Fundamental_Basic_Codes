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

void print_link_list(Node *&head){
     Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->value << " ";
        tmp = tmp->next;
    }

}

void reverse_print_link_list(Node *&tail){
      Node *tmp = tail;
    while (tmp != NULL)
    {
        cout << tmp->value << " ";
        tmp = tmp->prev;
    }
}
int main()
{
    Node *head = new Node(101);
    Node *a = new Node(111);
    Node *b = new Node(112);
    Node *c = new Node(113);

    head->next = a;
    a->next = b;
    b->next = c;

    a->prev = head;
    b->prev = a;
    c->prev = b;

    Node * tail = c;

    print_link_list(head);

    cout << endl
         << endl;

    reverse_print_link_list(tail);
    return 0;
}