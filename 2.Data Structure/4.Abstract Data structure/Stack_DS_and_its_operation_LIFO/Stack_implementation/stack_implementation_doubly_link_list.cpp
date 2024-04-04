#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
    int value;
    Node* next;
    Node *prev;

    Node(int value){
        this->value=value;
        this->next = NULL;
        this->prev = NULL;
    }
};

class myStack
{

public:
   Node *head = NULL;
   Node *tail = NULL;
   int sz =0;


    void push(int val)
    {   sz++;
        Node *newNode = new Node(val);
        if(head == NULL){
            head = newNode;
            tail = newNode;
            return;
        }
        newNode->prev = tail;
        tail->next = newNode;
        tail = tail->next;
    }


    void pop()
    {  sz--;
       Node *delNode = tail;
       tail = tail->prev;
       if(tail==NULL){
          head == NULL;
       }
       else{
           tail->next = NULL;
       }
       
       delete delNode;
    }


    int top()
    {
       return tail->value;
    }



    int size()
    {
        return sz;
    }



    bool empty()
    {
      if(sz == 0){
        return true;
      }
      else {
        return false;
      }
    }

};



int main()
{   int n;
    cin>>n;
    myStack st1;
    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        st1.push(x);
    }
 

        while(!st1.empty()){
            cout<<st1.top()<<endl;
            st1.pop();
        }
    return 0;
}