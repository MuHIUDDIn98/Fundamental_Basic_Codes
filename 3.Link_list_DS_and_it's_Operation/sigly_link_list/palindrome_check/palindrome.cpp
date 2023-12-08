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
        cout<<"head value inserted :"<<val<<endl;
        return ;
    }
    newNode->next = head;
    head = newNode;
}


void reverse_link_list(Node *&head, Node *&head1){
    Node *tmp = head;
    while(tmp != NULL){
        Insert_at_head(head1,tmp->value);
        tmp = tmp->next;
    }
}


bool is_palindrome(Node *&head, Node *&head1){
    
    Node *tmp = head;
    while(tmp != NULL){
        Insert_at_head(head1,tmp->value);
        tmp = tmp->next;
    }
    Node *tp = head;
    Node *ntp = head1;
    while(tp!=NULL){
        if(tp->value != ntp->value) return false;
        tp = tp->next;
        ntp = ntp->next;
    }

    return true;
}

void print_address_list(Node *head) // O(N)
{
    Node *tp = head;

    while (tp->next != NULL)
    {
        tp = tp->next;
        cout << tp << "  ";
    }
    cout<<endl;
}



int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    Node *head1 = NULL;
    Node *tail1 = NULL;
    int val;
    while (true)
    {
        cin >> val;
        if (val == -1)
            break;
        Insert_at_tail(head,tail,val);
    }
    
    print_Link_list(head);

    if(is_palindrome(head,head1)){
        cout<<"palindrome"<<endl;
    }
    else{
        cout<<"NOt palindrome "<<endl;
    }
    
    print_Link_list(head);
    print_Link_list(head1);
   
    return 0;
}