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

void insert_at_position(Node *head, int pos, int value)
{
    Node *newNode = new Node(value); // put value to new node first..

    //debug msg
    cout<<"newNode address :"<<newNode<<endl; //address of newNode



    Node *tmp = head;                // take e tmporary node to take head address.it is a good practice..
    for (int i = 1; i < pos - 1; i++)
    {               
        
        tmp = tmp->next; // travarsing tmp to the (position -1)
        cout<<"   tmp    Address of :"<<tmp<<"     tmp->value :"<<tmp->value<<endl;
    }

    //debug msg
    cout<<"tmp = position-1"<<endl;
    cout<<"(position -1)->next :"<<tmp->next<<"    value :"<<tmp->next->value<<endl;


  
    newNode->next = tmp->next; //passing tmp->next to newNode->next

    //debug msg
    cout<<"newNode->next = (pos-1)->next :"<<newNode->next<<endl;  


   
    tmp->next = newNode;  //newNode's address giving to tmp->next


    //debug msg
    cout<<"(pos-1)->next :"<<tmp->next<<"(newNode addr)"<<endl;
    cout << "Inserted at possition " << pos << endl<< endl;
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

void print_address_list(Node *head) // O(N)
{
    Node *tp = head;

    while (tp->next != NULL)
    {
        tp = tp->next;
        cout << tp << "  ";
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

    Node *tmp = head;

    print_Link_list(head);
    cout<<endl;
    print_address_list(head);
    cout << "Size of link list :" << size(head) << endl;

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
        print_address_list(head);
        insert_at_position(head, position, value);
        print_Link_list(head);
        cout << "Size of link list :" << size(head) << endl;
        print_address_list(head);
    }

    return 0;
}