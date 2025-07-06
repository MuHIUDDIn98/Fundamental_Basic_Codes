#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int value;
    Node* next;
    Node(){}
    Node(int value){
        this->value=value;
        this->next = NULL;
    }
};

void insert_at_tail(Node *&head,Node *&tail,int value){

    Node *newNode = new Node(value);
    if(head == NULL){
        //cout<<"Head NULL"<<endl;
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;


}

void print_linked_list(Node *&head){
    Node *temp = head;
    while(temp!=NULL){
        cout<<temp->value<<" ";
        temp = temp->next;
    }

    cout<<endl;

}

int main(){

    // Write your code here
    int V;
    int Max=INT_MIN;
    int Min=INT_MAX;

    Node *head=NULL;
    Node *tail=NULL;

    while(true){
        
        cin >> V;
        if(V == -1) break;
        if(V>Max){
            Max = V;
        }
        if(V<Min){
            Min = V;
        }
        insert_at_tail(head,tail,V);

    }
    cout<<endl;
    cout<<Max - Min<<endl;
   

   // print_linked_list(head);
return 0;
}