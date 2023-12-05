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
     a.next = &b;
     b.next = &c;
     c.next = NULL;
     a.next->value = 3; //assigning value
     (*a.next).value = 103;
     cout<<b.value<<endl;
     b.next->value = 15;//assigning value
     cout<<a.value<<" "<<b.value<<" "<<c.value<<endl;
     cout<<(*a.next).value<<" "<<(*b.next).value<<endl;
     cout<<a.next->value<<" "<<b.next->value<<endl;
     
    return 0;
}