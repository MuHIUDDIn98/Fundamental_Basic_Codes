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

void insert_at_tail(Node *&head, Node *&tail, int val){
   Node *newNode = new Node(val);
   if(head == NULL){
      head = newNode;
      tail = newNode;
      return ;
   }
   tail->next = newNode;
   tail = newNode;
}


int size(Node *head){
    int size=0;
    while(head !=NULL){
     head = head->next;
     size++;
    }

    return size;
}

void print_link_list(Node *head){

    while(head!=NULL){
        cout<<head->value<<" ";
        head = head->next;
    }
    cout<<endl;
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

int main(){
    Node *head = NULL;
    Node *tail = NULL;
    int val;
    cout<<"Enter your link list values :"<<endl;
    while(true){
        cin>>val;
        if(val == -1) break;
        insert_at_tail(head,tail,val);
    }

    print_recursively(head);
    cout<<endl;
    print_recursively_reverse(head);
    

    


    return 0;
}