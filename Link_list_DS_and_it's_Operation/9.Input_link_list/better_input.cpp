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

void insert_tail(Node * &head, Node *&tail, int val){
    Node *newNode = new Node(val); //o(1)
    if(head == NULL){
    head = newNode;
    tail = newNode;
    return ;
    }
    tail->next = newNode;
    tail = newNode;
    cout<<"Inserted at tail O(1)"<<endl;
}


void print_Link_list(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->value << " ";
        tmp = tmp->next;
    }

    cout << endl
         << endl;
}

int size(Node *head)
{ // O(N)
    Node *tmp = head;
    int size = 0;
    while (tmp != NULL)
    {
        size++;
        tmp = tmp->next;
    }
    return size;
}

int main(){
    Node *head = NULL;  
    Node *tail = NULL;
    int val;
    while(true){
        cin>>val;
        if(val == -1) break;
        insert_tail(head,tail,val);
    }

    print_Link_list(head);
    cout<<"Size of link list "<<size(head)<<endl;
    return 0;
}