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

void insert_at_head(Node *&head, Node *&tail, int value)
{
    Node *newNode = new Node(value);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    newNode->next = head;
    head = newNode;
}

void insert_at_tail(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}

void delete_Node(Node *&head, Node *&tail, int pos)
{
    if (pos < 0 || head == NULL)
        return;

    if (pos == 0)
    {
        Node *deleteNode = head;
        head = head->next;
        if (head == NULL)
            tail = NULL; // list becomes empty
        delete deleteNode;
        return;
    }

    Node *tmp = head;
    for (int i = 0; i < pos - 1 && tmp != NULL; i++)
    {
        tmp = tmp->next;
    }

    if (tmp == NULL || tmp->next == NULL)
        return;

    Node *deleteNode = tmp->next;
    tmp->next = deleteNode->next;

    if (deleteNode == tail)
        tail = tmp;

    delete deleteNode;
}

void print_list(Node *h)
{
    Node *tmp = h;
    while (tmp != NULL)
    {
        cout << tmp->value << " ";
        tmp = tmp->next;
    }
    cout << endl;
}

int size_of_list(Node *head)
{
    int count = 0;
    Node *tmp = head;
    while (tmp != NULL)
    {
        count++;
        tmp = tmp->next;
    }
    return count;
}

int main()
{   // Write your code here
    int Q;
    cin >> Q;
    Node *head = NULL;
    Node *tail = NULL;

    while (Q--)
    {
        int X, V;
        cin >> X >> V;

        if (X == 0)
        {
            insert_at_head(head, tail, V);
        }
        else if (X == 1)
        {
            insert_at_tail(head, tail, V);
        }
        else if (X == 2)
        {
            if (V < size_of_list(head))
            {
                delete_Node(head, tail, V);
            }
        }

        print_list(head);
    }

    return 0;
}
