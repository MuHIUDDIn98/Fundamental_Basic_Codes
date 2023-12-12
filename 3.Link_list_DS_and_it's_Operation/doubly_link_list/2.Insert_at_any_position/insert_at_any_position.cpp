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

void insert_at_position(Node *&head,Node *&tail,int pos,int val){ //avoid last index 

    // if(head == NULL || pos == 0){
    //    insert_at_head(head,tail,val);
    // }
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

void insert_at_head(Node *&head, Node *&tail,int val){
     Node *newNode = new Node(val);
     if(head == NULL){
        head = newNode;
        tail = newNode;
        return;
     }
     newNode->next = head;
     head->prev = newNode;
     head = newNode;
}

void insert_at_tail(Node *&head,Node *&tail,int val){
     Node *newNode = new Node(val);
     if(head == NULL){
        head = newNode;
        tail = newNode;
        return;
     }
     tail->next = newNode;
     newNode->prev = tail;
     tail = newNode;
}


int main()
{

    Node *head = new Node(1);
    Node *a = new Node(2);
    Node *b = new Node(3);
    Node *c = new Node(4);

    head->next = a;
    a->next = b;
    b->next = c;

    a->prev = head;
    b->prev = a;
    c->prev = b;

    Node * tail = c;

    print_link_list(head);

    cout << endl
         << endl
         << endl;
    reverse_print_link_list(tail);
    cout<<endl;

   
    int pos,val;

    while(true){
        cout<<"Enter Pos , val :"<<endl;
        cin>>pos>>val;
        if(val== -1) break;
        if(pos>size(head)){
            cout<<"invalud position"<<endl;
        }
        else if(pos == size(head)){

            insert_at_tail(head,tail,val);
        }
        else if(pos == 0){
           insert_at_head(head,tail,val);
        }
        else{
        insert_at_position(head,tail,pos,val);
        }

    }

    print_link_list(head);
    cout<<endl;
    reverse_print_link_list(tail);
    cout<<endl;
   
    
    return 0;
}

