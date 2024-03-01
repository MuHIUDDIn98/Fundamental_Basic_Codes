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


void delete_Node(Node *head, int pos)
{
    Node *tmp = head;
    for (int i = 1; i < pos - 1; i++)
    {
        tmp = tmp->next;
    }
    Node  *deleteNode = tmp->next;
    tmp->next = tmp->next->next;
    delete deleteNode;   
    cout << "deleted from position " << pos << endl
         << endl;
}



void delete_head(Node *&head){
    Node * deleteNode = head;
    head = head->next;
    delete deleteNode;
}

void print_Link_list(Node *head)
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
    cout<<"Size of linklist "<<size(head)<<endl;

    int position, value;
    cout << "Enter your positon : " << endl;
    cin >> position;
    print_Link_list(head);
    if(position>size(head)){
        cout<<"invalid position"<<endl;
    }

    else if(position == 0){
        delete_head(head);
        print_Link_list(head);
        cout<<"Size of linklist "<<size(head)<<endl;
    }

    else{
    delete_Node(head,position);
    print_Link_list(head);
    cout<<"Size of linklist "<<size(head)<<endl;
    }
   
   
   
    
   

return 0;
}