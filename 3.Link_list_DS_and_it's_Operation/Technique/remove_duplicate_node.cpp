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

int main(){
    Node *head = NULL;
    Node *tail = NULL;
    Node *a = new Node(10);//assign 10 and next addr null 
    a->next = b;
    Node *b = new Node(20);//assign 20 next addr null

    while(true){
        int val;
        cin>>val;
        if(val==-1) break;
        // insert_tail(head,tail,val);
    }
    Node *tmp = head;
    while(tmp != NULL && tmp->next != NULL){
        if(tmp->value == tmp->next->value){
            Node *delNode = tmp->next;
            tmp->next = delNode->next;
            delete delNode;
        }
        else{
            tmp = tmp->next;
        }
        
    }

    return 0;
}