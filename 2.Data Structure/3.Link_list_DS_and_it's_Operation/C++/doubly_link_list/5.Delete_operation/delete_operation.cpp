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

void print_link_list(Node *head){
     Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->value << " ";
        tmp = tmp->next;
    }

}

void reverse_print_link_list(Node *tail){
      Node *tmp = tail;
    while (tmp != NULL)
    {
        cout << tmp->value << " ";
        tmp = tmp->prev;
    }
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

void delete_at_tail(Node *&head ,Node *&tail){

    Node *delNode = tail;
    tail = tail->prev;   
    delete delNode;
    tail->next = NULL;

}

void delte_at_head(Node *&head , Node *&tail){
     Node *delNode = head;
     head = head->next;
     head->prev = NULL;
     delete delNode;

}

void delte_at_position(Node *&head,Node *&tail, int pos){
    Node * tmp = head;
    if(pos == size(head)-1){
        delete_at_tail(head,tail);
        return;
    }
    else if(pos == 0){
        delte_at_head(head,tail);
        return;
    }
    else if(pos >= size(head)){
        cout<<"Invalid pos"<<endl;
        return;
    }
    for(int i=1; i<=pos-1; i++){
        tmp = tmp->next;
    }
    Node * deleteNode = tmp->next;
    tmp->next = tmp->next->next;
    cout<<tmp->next->value<<endl;
    tmp->next->prev = tmp;
    delete deleteNode;

}




int main()
{

    Node *head = new Node(11);
    Node *a = new Node(12);
    Node *b = new Node(13);
    Node *c = new Node(14);
    Node *d = new Node(15);
    Node *e = new Node(16);

    head->next = a;
    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;

    a->prev = head;
    b->prev = a;
    c->prev = b;
    d->prev = c;
    e->prev = d;
    Node * tail = e;

    print_link_list(head);
    cout<< endl;
    reverse_print_link_list(tail);
    cout<<endl;
    cout<<"size of link list :"<<size(head)<<endl;\
    int input;
    while(true){
        cout<<"to exit please press '0' "<<endl;
        cout<<"to delete press '1' : "<<endl;
        cin>>input;
        if(input == 1){
            cout<<"enter your desired position to delete:"<<endl;
            int pos;
            cin>>pos;
            //here position is index..
            delte_at_position(head,tail,pos);
        
            print_link_list(head);
            cout<<endl;
            reverse_print_link_list(tail);
            cout<<endl;
            
        }
        else if (input == 0){
            break;
        }
    }
      
    return 0;
}

