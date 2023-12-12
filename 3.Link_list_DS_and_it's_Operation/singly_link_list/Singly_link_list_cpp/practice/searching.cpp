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

void Insert_at_tail(Node *&head,Node *&tail, int val) //o(1)
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

int searching(Node *&head,int number){
     Node *tmp = head;
    int index = 0;
    while(tmp != NULL){
        if(tmp->value == number){
            return index;
        }       
        tmp = tmp->next;
        index++;
    }
 return -1;
}





int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int t;
    cin>>t;

    while(t--){
        int val;
        while (true)
        {
            cin >> val;
            if (val == -1)
                break;
            Insert_at_tail(head,tail,val);


        }

        int number;
        cin>>number;

        cout<<searching(head,number)<<endl;
         while (head != NULL) {
            Node* temp = head;
            head = head->next;
            delete temp;
        }
    }
     
    
   
   
    return 0;
}
