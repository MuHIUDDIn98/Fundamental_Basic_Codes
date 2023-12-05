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

void insert_at_tail(Node *&head, int val)
{
    Node *newNode = new Node(val);

    if (head == NULL)
    {
        head = newNode;
        cout << "insteted at Head" << endl
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
    cout << "Inserted at Tail" << endl
         << endl
         << endl;
}

void insert_at_position(Node *head, int pos, int value)
{
    Node *newNode = new Node(value);
    Node *tmp = head;
    for (int i = 1; i < pos - 1; i++)
    {
        tmp = tmp->next;
    }
    newNode->next = tmp->next;
    tmp->next = newNode;
    cout << "Inserted at possition " << pos << endl
         << endl;
}

void delete_from_positon(Node *head, int pos)
{
    Node *tmp = head;
    for (int i = 1; i < pos - 1; i++)
    {
        tmp = tmp->next;
    }
    Node *DeleteNode = tmp->next;
    tmp->next = tmp->next->next;
    delete DeleteNode;
    cout << "Deleted position " << pos << endl
         << endl;
}


void Insert_at_head(Node *&head,int value){
Node *newNode = new Node(value);
newNode->next = head;
head = newNode;
}


void delete_head(Node *&head)
{
    Node *DelteHead = head;
    head = head->next;
    delete DelteHead;
    cout << "Deleted head " << endl
         << endl;
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
        cout << "3.Insert at any position" << endl;
        cout << "4.Insert at head" << endl;
        cout << "5.Delete from specific position" << endl;
        cout << "6.Delete Head" << endl;
        cout << "7.terminate" << endl;
        int option;
        cin >> option;
        if (option == 1)
        {
            cout << "please insert your value:" << endl;
            int v;
            cin >> v;
            insert_at_tail(head, v);
        }
        else if (option == 2)
        {
            cout << "your link list values:";
            print_Link_list(head);
            cout << endl;
        }
        else if (option == 3)
        {
            int pos, value;
            cout << "position:";
            cin >> pos;
            cout << endl;
            cout << "Value:";
            cin >> value;
            cout << endl;
           
            if(pos == 0){
                Insert_at_head(head,value);
            }
            else{
                 insert_at_position(head, pos, value);
            }
        }
        else if (option == 4)
        {
            cout<<"Enter your head value:"<<endl;
            int value;
            cin>>value;
            Insert_at_head(head,value);
        }
        else if (option == 5)
        {
            int pos;
            cout << "position:";
            cin >> pos;
            cout << endl;
            if (pos == 0)
            {

                delete_head(head);
            }
            else
            {
                delete_from_positon(head, pos);
            }
        }
        else if (option == 6)
        {
            delete_head(head);
        }
        else if (option == 7)
        {
            cout << "Terminated" << endl;
            break;
        }
    }

    return 0;
}