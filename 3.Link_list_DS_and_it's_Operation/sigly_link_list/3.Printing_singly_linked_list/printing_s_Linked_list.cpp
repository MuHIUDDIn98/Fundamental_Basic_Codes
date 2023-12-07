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
int main(){
    Node* head = new Node(10);
    Node* a = new Node(101);
    Node* b = new Node(102);
    Node* c = new Node(103);
    Node* d = new Node(104);
    
    head->next = a;
    a->next = b;
    b->next = c;
    c->next = d;

    Node *tmp = head;
   cout<<head->value<<endl;


   while(tmp!=NULL){
    cout<<tmp->value<<endl;
    tmp = tmp->next;
   }
    return 0;
}