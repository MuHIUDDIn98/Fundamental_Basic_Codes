#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int value;
    Node *next;

    Node(int value)
    {
        this->value = value;
        this->next = NULL;
    }
};

void Insert_At_Tail(Node *&head, int val) //reference of head must be
{
    Node *newNode = new Node(val); //dynamic Node

    if (head == NULL) //exception handelling..
    {
        head = newNode;
        cout << "Inserted at head" << endl
             << endl
             << endl;
        return;
    }
    Node *tmp = head;
    while (tmp->next != NULL)
    {
        tmp = tmp->next;
    }
    tmp->next = newNode;
}

void print_Link_list(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->value << " ";
        tmp = tmp->next;
    }
    cout << endl
         << endl;
}

int main()
{
    Node *head = NULL;

    while (true)
    {
        cout << "1.Insert at tali" << endl;
        cout << "2.print your values" << endl;
        cout << "3.terminate" << endl
             << endl
             << endl;
        int option;
        cin >> option;
        if (option == 1)
        {
            cout << "please insert your value:" << endl;
            int v;
            cin >> v;
            Insert_At_Tail(head, v);
        }
        else if (option == 2)
        {
            cout << "your link list values:";
            print_Link_list(head);
            cout << endl;
        }
        else if (option == 3)
        {
            cout << "Terminated" << endl;
            break;
        }
    }

    return 0;
}