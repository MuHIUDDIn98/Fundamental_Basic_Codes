#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int value;
    Node* next; //self referencial poiniter..
    Node(){}
    Node(int value){
        this->value=value;
        this->next = NULL;
    }
};
int main(){
        
        Node a(10);
        Node b(101);
        Node c;
        Node d;
        Node e;
        a.next = &b;
        b.next = &c;
        c.next = &d;
        d.next = &e;
        c.value = 40; //b.next->value = 40
        c.next->value = 50; //d.value = 50
        d.next->value = 60; //e.value = 60
        e.next = NULL;

     cout<<"a value :"<<a.value<<"  b value :"<<b.value<<endl;
     cout<<"b value :"<<(*a.next).value<<endl; //it can be print like dereferancing..
     cout<<"b value :"<<a.next->value<<endl;
     cout<<"c value :"<<b.next->value<<endl;
     cout<<"d value :"<<c.next->value<<endl;  
     cout<<"e value :"<<d.next->value<<endl;
    return 0;
}