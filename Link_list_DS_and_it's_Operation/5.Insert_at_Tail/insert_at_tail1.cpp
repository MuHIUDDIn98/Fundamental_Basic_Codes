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
    cout << "Inserted at Tail o(N)" << endl
         << endl
         << endl;
}


void insert_tail(Node * head, Node * tail, int val){
    Node *newNode = new Node(val); //o(1)
    if(head == NULL){
    head = newNode;
    tail = newNode;
    return ;
    }
    tail->next = newNode;
    tail = newNode;
    cout<<"Inserted at tail O(1)"<<endl;
}


void insert_at_head(Node *&head,int value)
{
    Node *newNode = new Node(value);//o(1)
    newNode->next = head;
    head = newNode;
}

void print_Link_list(Node *head) // O(N)
{
    Node *tmp = head;
    cout<<"Your link list values: "<<endl;
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


void insert_at_position(Node *head, int pos, int value)
{
    Node *newNode = new Node(value);
    Node *tmp = head;
    for (int i = 1; i < pos - 1; i++)
    {
        tmp = tmp->next;
    }
    newNode->next = tmp->next;
    tmp->next = newNode;
    cout << "Inserted at possition " << pos << endl
         << endl;
}

int main()
{
    Node *head = new Node(10);//head
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);
    Node *d = new Node(50);
    head->next = a; // a's address assigning to head->next to connect head to a
    a->next = b;
    b->next = c;
    c->next = d;
    Node *tail = d; //tail

    print_Link_list(head);

    int position, value;
    cout << "Enter your tail position: " << endl;
    cin >> position;
    cout << "Enter your value: " << endl;
    cin >> value;
    if (position > size(head))
    {
        cout << "Invalid positon" << endl;
    }
    else if(position == size(head)){
        insert_tail(head,tail,value);
        print_Link_list(head);
    }
    else if(position == 0){
       insert_at_head(head,value);
       print_Link_list(head);
    }
    else if(position >0 && position <size(head)){
        insert_at_position(head,position,value);
        print_Link_list(head);
    }
return 0;
}