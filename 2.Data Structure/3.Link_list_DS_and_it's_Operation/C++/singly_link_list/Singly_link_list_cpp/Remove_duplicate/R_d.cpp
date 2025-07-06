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

    cout << endl
         << endl;
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



void remove_duplicate(Node *&head){
    Node *temp = head;
    while(temp !=NULL &&temp->next != NULL){

        if(temp->value == temp->next->value){

            Node *delNode = temp->next;
            
            temp->next = delNode->next;

            delete delNode;
        }
        else{
            temp = temp->next;
        }
        
    }

}

int main()
{   // Write your code here
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
   
     for (Node *i = head; i->next != NULL; i = i->next)
    {
        for (Node *j = i->next; j != NULL; j = j->next)
        {
          if (i->value > j->value)
            {
                swap(i->value, j->value);
            }
           
        }
    }
    remove_duplicate(head);
    print_Link_list(head);
   

   
    return 0;
}