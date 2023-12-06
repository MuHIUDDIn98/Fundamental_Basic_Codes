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
int main()
{
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);
    Node *d = new Node(50);
    cout << "a          address :" << a << endl;
    head->next = a; // a's address assigning to head->next to connect head to a
    a->next = b;
    b->next = c;
    c->next = d;
    cout << "head->next address :" << head->next << endl;
    cout << "head value :" << head->value << endl;
    cout << "head value :" << (*head).value << endl;

    cout<<"==printing a value..=="<<endl;
    cout << "a value :" << (*head->next).value << endl;
    cout << "a value :" << head->next->value << endl;
    cout<<"==printing b value..=="<<endl;
    cout << "b value :" << (*a->next).value << endl;
    cout << "b value :" << a->next->value << endl;
    cout << "b value :" << head->next->next->value << endl;
    cout<<"==printing c value..=="<<endl;
    cout << "c value :" << (*b->next).value << endl;
    cout << "c value :" << b->next->value << endl;
    cout << "c value :" << head->next->next->next->value << endl;
    cout<<"==printing d value..=="<<endl;
    cout << "d value :" << (*c->next).value << endl;
    cout << "d value :" << c->next->value << endl;
    cout << "d value :" << head->next->next->next->next->value << endl;

    return 0;
}