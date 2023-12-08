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

    void print_list(Node *h){
        Node *tmp = h;
        while(tmp != NULL){
            cout<<tmp->value<<" ";
            tmp = tmp->next;
        }
    }

    void print_list_wt(Node *h){
        while(h != NULL){
            cout<<h->value<<" ";
            h = h->next;
        }
    }
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
    print_list(head);
    cout<<endl;
    print_list_wt(head);


    return 0;
}