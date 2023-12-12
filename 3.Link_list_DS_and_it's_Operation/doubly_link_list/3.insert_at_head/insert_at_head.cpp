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


int main()
{

    Node *head = NULL;
    Node *tail = NULL;

   
    int pos,val;
    cout<<"Enter val :"<<endl;
    while(true){      
        cin>>val;
        if(val== -1) break;
        insert_at_head(head,tail,val);


    }

    print_link_list(head);
    cout<<endl;
    reverse_print_link_list(tail);
    cout<<endl;
   
    
    return 0;
}

