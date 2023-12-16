#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int value;
    Node* next;

    Node(int value){
        this->value=value;
        this->next = NULL;
    }
};

void insert_tail(Node * &head, Node *&tail, int val){
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


void print_recursively(Node *n){
   if(n==NULL) return;
   cout<<n->value<<" ";
   print_recursively(n->next);
}

void print_recursively_reverse(Node *n){
    if(n==NULL) return;
    print_recursively_reverse(n->next);
    cout<<n->value<<" ";
}


void reverse(Node *&head, Node *cur){
     if(cur->next == NULL){
        head = cur;
        return;
     }
     reverse(head,cur->next);
     cur->next->next =cur;
     cur->next = NULL;
}

int main(){
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
    
    reverse(head,head);
    print_Link_list(head);
    print_recursively(head);
    cout<<endl;
    print_recursively_reverse(head);
    return 0;
}