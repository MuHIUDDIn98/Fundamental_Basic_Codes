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

int main(){

    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);
    Node * d = new Node(50);

    head->next = a;
    a->next = b;
    b->next = c;
    c->next = d;
    //d->next = a;

    Node * slow = head;
    Node * fast = head;
    int flag = 0;

    while(fast != NULL && fast->next != NULL){
        
        slow = slow->next;
        fast = fast->next->next;
        if(slow == fast) {
            flag = 1;
            break;
        }
    }

    if(flag){
        cout<<"cycle exits"<<endl;

    }
    else{

        cout<<"cycle not exit"<<endl;
    }

   
return 0;
}