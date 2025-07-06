#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int value;
    Node *next;
    Node() {}
    Node(int value)
    {
        this->value = value;
        this->next = NULL;
    }
};

void insert_at_tail(Node *&head, Node *&tail, int value)
{

    Node *newNode = new Node(value);
    if (head == NULL)
    {
        // cout<<"Head NULL"<<endl;
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}


int compare(Node *&head1, Node *&head2)
{
    Node *tmp1 = head1;
    Node *tmp2 = head2;

    while (tmp1 != NULL && tmp2 != NULL)
    {

        if (tmp1->value != tmp2->value)
        {
            return 0;
        }
        tmp1 = tmp1->next;
        tmp2 = tmp2->next;
    }
    return (tmp1 == NULL && tmp2 == NULL);
}

int main()
{

    // Write your code here

    int V;

    Node *head1 = NULL;
    Node *tail1 = NULL;

    Node *head2 = NULL;
    Node *tail2 = NULL;

    while (true)
    {

        cin >> V;
        if (V == -1)
            break;
        insert_at_tail(head1, tail1, V);
    }

    while (true)
    {

        cin >> V;
        if (V == -1)
            break;
        insert_at_tail(head2, tail2, V);
    }

    if (compare(head1, head2))
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    // print_linked_list(head);
    return 0;
}