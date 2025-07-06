#include<bits/stdc++.h>
using namespace std;

class Node{
     public:
     int value;
     Node* next;
};

int main(){
 
     Node a,b,c;
     a.value = 10;
     a.next = &b; //assigning  a objests next node address..&b
     b.next = &c; //assigning  b objests next node address..&c
     c.next = NULL;//assiging c objects next node (NULL)
     a.next->value = 3; //assigning b value
     cout<<b.value<<endl;
     (*a.next).value = 103;//assigning b value
     cout<<b.value<<endl;
     b.next->value = 15;//assigning value
     cout<<"a Value :"<<a.value<<"  b value: "<<b.value<<" c Value :"<<c.value<<endl;
     cout<<"b value :"<<(*a.next).value<<" c value :"<<(*b.next).value<<endl;
     
     cout<<"b value :"<<a.next->value<<" c value :"<<b.next->value<<endl;
     cout<<"c value :"<<(*(*a.next).next).value<<endl;
     cout<<"c value :"<<a.next->next->value<<endl;
     
    return 0;
}