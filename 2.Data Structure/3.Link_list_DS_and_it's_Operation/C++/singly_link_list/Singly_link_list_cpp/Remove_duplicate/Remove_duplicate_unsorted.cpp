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


void delete_node(Node *&head,int val){
    Node * tmp2 = head;
    while(tmp2->next != NULL){
        if(tmp2->next->value == val){
            Node *delNode = tmp2->next;
            tmp2->next = delNode->next;
            delete delNode;
        }
        else{
            tmp2 = tmp2->next;
        }
    }
    
}


void remove_duplicate(Node *&head){
    Node *tmp = head;
    while(tmp!=NULL){
        delete_node(tmp,tmp->value);
        tmp = tmp->next;
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


    remove_duplicate(head);
    

    print_Link_list(head);

   
    return 0;
}


//https://www.facebook.com/romjanxr/videos/684962630428981?idorvanity=706941641270641