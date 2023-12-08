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
        cout<<"head = NULL inserted at head"<<endl;
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
    reverse_link_list(head,head1);
    print_Link_list(head1); 
    return 0;
}