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

bool is_palindrome(Node *&head, Node *&tail){
    Node *i= head;
    Node *j= tail;
    while(i!=j){
        if(i->value != j->value){
           return false;
        }
        
            i=i->next;
            j=j->prev;
        
    }

return true;
}


int main()
{

    Node *head = NULL;
    Node *tail = NULL;


   
    int val;
    while(true){
     cin>>val;
     if(val == -1) break;
     insert_at_tail(head,tail,val);
    }
    

    if(is_palindrome(head,tail)){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    
    return 0;
}

