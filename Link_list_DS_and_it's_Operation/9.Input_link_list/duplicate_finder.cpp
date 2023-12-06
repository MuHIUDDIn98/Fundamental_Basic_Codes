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

void insert_at_tail(Node *&head, int val)
{
    Node *newNode = new Node(val);

    if (head == NULL)
    {
        head = newNode;
        return;
    }
    Node *tmp = head;
    while (tmp->next != NULL)
    {
        tmp = tmp->next;
    }
    tmp->next = newNode;
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

int main()
{
    Node *head = NULL;

    int value;
    int count=0;
    int frq[100]={0};
    bool duplicate = false;
    cout<<"Enter your link list elements: "<<endl;
    while (true)
    {
        cin >> value;
        if(value == -1) break;
        insert_at_tail(head,value);
        frq[value]++;      
        
    }

    print_Link_list(head);

    for(int i=0; i<100; i++){
        if(frq[i]>1){
            duplicate = true;
        }
    }

    if(duplicate){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }

    return 0;
}