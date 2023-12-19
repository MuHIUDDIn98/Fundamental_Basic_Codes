#include <bits/stdc++.h>
using namespace std;

// Node class for doubly linked list
class Node
{
public:
    string value;
    Node *next;
    Node *prev;

    Node(string value)
    {
        this->value = value;
        this->next = NULL;
        this->prev = NULL;
    }
};

// Doubly Linked List class
class DoublyLinkedList
{
public:
    Node *head;
    Node *tail; // for tail insertion..
    Node *cur;
    Node *tmp;

    // default constructor..
    DoublyLinkedList()
    {
        head = NULL;
        tail = NULL;
    }

    // tail insert function..
    void addNode(string value)
    {
        Node *newNode = new Node(value);
        if (!head)
        {
            head = newNode;
            tail = newNode;
        }
        else
        {
            tail->next = newNode;
            newNode->prev = tail;
            tail = newNode;
        }
    }

    // Find a node in the list based on Value.string address..
    string findNode(string value)
    {
         tmp = head;
        while (tmp!=NULL)
        {
            if (tmp->value == value)
            {   cur = tmp;
                return tmp->value;
            }
            tmp = tmp->next;
        }
        return "Not Available";
    }

    string Next()
    {
        if (!cur || !cur->next)
        {
            return "Not Available";
        }
        cur = cur->next;

        return cur->value;
    }

    string Prev()
    {
        if (!cur || !cur->prev)
        {
            return "Not Available";
        }
            cur = cur->prev;

        return cur->value;
        
    }

};

int main()
{
    DoublyLinkedList dll;
    // Input the doubly linked list
    string value;
    while (cin >> value)
    {
        if (value == "end")
        {
            break;
        }
        dll.addNode(value);
    }

    int Q;
    cin >> Q;

    while (Q--)
    {   
        string command, address;
        cin >> command;

        if (command == "visit")
        {
            cin >> address;
            ;
            cout << dll.findNode(address) << endl;
        }
        else if (command == "next")
        {
            cout<<dll.Next()<<endl;
        }
        else if (command == "prev")
        {
           cout<<dll.Prev()<<endl;
        }
    }

    return 0;
}