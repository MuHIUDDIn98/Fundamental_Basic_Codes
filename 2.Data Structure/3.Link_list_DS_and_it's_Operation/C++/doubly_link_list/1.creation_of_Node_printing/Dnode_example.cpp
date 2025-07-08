#include<bits/stdc++.h>
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

void printList(Node *&head,Node *&tail){
    Node * tmp = head;
    while(tmp != NULL){
        cout<<tmp->value<<" ";
        tmp = tmp->next;
    }
    cout<<endl;
    cout<<"reverse"<<endl;
    tmp = tail;
    while(tmp != NULL){
        cout<<tmp->value<<" ";
        tmp = tmp->prev;
    }

}

int main(){

    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);

    Node * tail = c;

    head->next = a;
    a->prev = head;
    a->next = b;
    b->prev = a;
    b->next = c;
    c->prev = b;

    printList(head,tail);


   
return 0;
}