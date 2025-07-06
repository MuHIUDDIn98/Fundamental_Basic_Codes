#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int value;
    Node *next; // self referencial poiniter..
    Node() {}
    Node(int value)
    {
        this->value = value;
        this->next = NULL;
    }
};

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

int find_index(Node *&head, int X)
{
    int index = 0;
    while (head != NULL)
    {
        if (head->value == X)
            return index;
        head = head->next;
        index++;
    }
    return -1;
}

void delete_list(Node *&head)
{
    while (head != NULL)
    {
        Node *temp = head;
        head = head->next;
        delete temp;
    }
}

int main()
{
    // Write your code here
    int T;
    cin >> T;

    while (T--)
    {
        Node *head = NULL;
        Node *tail = NULL;
        int val;
        int X;

        while (true)
        {
            cin >> val;
            if (val == -1)
                break;
            insert_at_tail(head, tail, val);
        }
        cin >> X;
        cout << find_index(head, X) << endl;
        delete_list(head);
    }

    return 0;
}