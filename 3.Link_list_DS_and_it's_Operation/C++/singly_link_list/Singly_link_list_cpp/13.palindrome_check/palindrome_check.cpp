#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int value;
    Node *next;

    Node(int value)
    {
        this->value = value;
        this->next = NULL;
    }
};

void print_Link_list(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->value << " ";
        tmp = tmp->next;
    }

    cout << endl;
}

void Insert_at_tail(Node *&head,Node *&tail, int val) //o(1)
{
    Node *newNode = new Node(val);
    
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;


}


void Insert_at_head(Node *&head,int val){
    Node *newNode = new Node(val);
    if(head==NULL){
        head = newNode;
        cout<<"first head inserted.."<<endl;
        return ;
    }
    newNode->next = head; //newnode er next e head er address rakhlam..
    head = newNode; // new node k head banailam..
}


void reverse_link_list(Node *&head, Node *&head1){
    Node *tmp = head;
    while(tmp != NULL){
        Insert_at_head(head1,tmp->value);
        tmp = tmp->next;
    }
}


bool is_palindrome(Node *head){
    Node * newHead=NULL;
    Node *tmp = head;

    while(tmp != NULL){
        Insert_at_head(newHead,tmp->value);
        tmp = tmp->next;
    }

    while(head!=NULL){       
        if(head->value != newHead->value) return false;
        head = head->next;
        newHead = newHead->next;
    }

    return true;
}




int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int val;
    while (true)
    {
        cin >> val;
        if (val == -1)
            break;
        Insert_at_tail(head,tail,val);
    }
    
    print_Link_list(head);

    if(is_palindrome(head)){
        cout<<"palindrome"<<endl;
    }
    else{
        cout<<"NOt palindrome "<<endl;
    }
    
   
    return 0;
}