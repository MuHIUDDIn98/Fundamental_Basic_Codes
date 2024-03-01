#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int value;
    Node* next;
    Node *prev;
    
     Node(){  //default constructor..
    }

    Node(int value){
        this->value=value;
        this->next = NULL;
        this->prev = NULL;
    }
};


void print_link_list(Node *head){
    Node *tmp = head;
     while(tmp != NULL){
        cout<<tmp->value <<" ";
        tmp = tmp->next;
     }
     cout<<endl<<endl;
}

void reverse_print_link_list(Node *tail){
      while(tail != NULL){
        cout<<tail->value <<" ";
        tail = tail->prev;
     }
     cout<<endl<<endl;;
}

void Insert_at_position(Node *&head,int pos, int val){

    Node *newNode = new Node(val);
    Node *tmp = head;
    for(int i=1; i<pos-1; i++){
       tmp = tmp->next;
    }
    newNode->next = tmp->next;
    tmp->next = newNode;
    newNode->next->prev = newNode;
    newNode->prev = tmp;

}

int size(Node *head){
    int count=0;
    Node * tmp = head;
    while(tmp!=NULL){
        count++;
        tmp = tmp->next;
    }
 return count;
}

int main(){
    Node *head =new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);
    Node *d = new Node(50);

    head->next = a;
    a->next = b;
    b->next = c;
    c->next = d;
    
    Node *tail;
    tail = d;
    d->prev = c;
    c->prev = b;
    b->prev = a;   
    a->prev = head;

    
    print_link_list(head);
    reverse_print_link_list(tail);


    int val,pos;
    cin>>pos>>val;
    if(pos == 0){
        cout<<"invalid at head"<<endl;
    }
    else if(pos == size(head)){
        cout<<"invalid at last node"<<endl;
    }
    else{
        Insert_at_position(head,pos,val);
    }
        
     print_link_list(head);
    reverse_print_link_list(tail);

    return 0;
}