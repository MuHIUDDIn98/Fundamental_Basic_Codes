#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int value;
    Node *next;
    Node *prev;

    Node(int value)
    {
        this->value = value;
        this->next = NULL;
        this->prev = NULL;
    }
};

class myStack
{

public:
    Node *head = NULL;
    Node *tail = NULL;
    int sz = 0;

    void push(int val)
    {
        sz++;
        Node *newNode = new Node(val);
        if (head == NULL)
        {
            head = newNode;
            tail = newNode;
            return;
        }
        newNode->prev = tail;
        tail->next = newNode;
        tail = tail->next;
    }

    void pop()
    {
        sz--;
        Node *delNode = tail;
        tail = tail->prev;
        if (tail == NULL)
        {
            head == NULL;
        }
        else
        {
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
        if (sz == 0)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

  
};

class myQuee
{public:
       int sz=0;
       Node *head = NULL;
       Node *tail = NULL;
    void push(int val){
        sz++;
        Node *newNode = new Node(val);
        if(head == NULL){
           head = newNode;
           tail = newNode;
           return;
        }
        tail->next = newNode;
        newNode->prev = tail;
        tail = tail->next;
    }

    void pop(){
        sz--;
        Node *delNode = head;
        head = head->next;
        
        if(head == NULL)
        { tail = NULL;
          delete delNode;
          return;
        }
        head->prev = NULL;
        delete delNode;

    }

    int front(){
        return head->value;
    }

    bool empty(){
        if(sz==0){
            return true;
        }
        else{
            return false;
        }
    }
    int size()
    {
        return sz;
    }


};

int main()
{
    int n, m;
    cin >> n;
    cin >> m;

    myStack st1;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        st1.push(x);
    }
    myQuee t2;

    for (int i = 0; i < m; i++)
    {
        int y;
        cin >> y;
        t2.push(y);
    }

    bool similar = true;

    if (st1.size() != t2.size())
    {
        cout << "NO" << endl;
        return 0;
    }
    else if (st1.size() == t2.size())
    {

        while (!st1.empty())
        {


            if (st1.top() != t2.front())
            {
                similar = false;
            }

            st1.pop();
            t2.pop();
        }
    }

    if (similar)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}