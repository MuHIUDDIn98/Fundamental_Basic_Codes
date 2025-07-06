#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int value;
    Node* next; //self referencial poiniter..
    Node(){}
    Node(int value){
        this->value=value;
        this->next = NULL;
    }
};


void print_linkedList(Node *&head){

    if (head == NULL) {
        cout << "Linked List is empty!" << endl;
        return;
    }
        Node * temp = head;
        while(temp!= NULL){
            cout<<temp->value<<" ";
            temp = temp->next;
        }
        cout<<endl;
}

void insert_at_head(Node * &head, int value){
    Node *newNode = new Node(value);
    newNode->next = head;
    head = newNode;
    cout<<"Inserted at head completed"<<endl;
    
}


void delete_head(Node *&head){

    if (head == NULL) {
        cout << "Nothing to delete, list is already empty!" << endl;
        return;
    }

    Node *DeleteNode = head;
    head = head->next;
    delete DeleteNode;
    cout<<"Head deleted"<<endl;
}


int main(){

Node *head = new Node(10);
Node *a = new Node(20);
Node *b = new Node(30);
Node *c = new Node(40);
Node *d = new Node(50);

head->next = a;
a->next = b;
b->next = c;
c->next = d;

print_linkedList(head);

insert_at_head(head,111111);

print_linkedList(head);

delete_head(head);
print_linkedList(head);



   
return 0;
}