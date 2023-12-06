#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int value;
    Node* next; //self referencial poiniter..

    Node(int value){
        this->value=value;
        this->next = NULL;
    }
};
int main(){
        Node a(10);
        Node b(101);
        a.next = &b;
     cout<<"a value :"<<a.value<<"  b value :"<<b.value<<endl;
     cout<<"b value :"<<(*a.next).value<<endl;
     cout<<"b value :"<<a.next->value<<endl;
    return 0;
}