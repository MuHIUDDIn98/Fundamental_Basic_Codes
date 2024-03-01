#include <bits/stdc++.h>
using namespace std;
int sz = 0;
class Node
{
public:
    int value;
    Node *next;
    Node *prev;
    Node(){}
    Node(int value)
    {
        this->value = value;
        this->next = NULL;
        this->prev = NULL;
    }
};

void insert_at_head(Node *&head, Node *&tail, int val)
{

    Node *newNode = new Node(val);
    sz++;
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    newNode->next = head;
    head->prev = newNode;
    head = newNode;
}

void insert_at_tail(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    sz++;
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;
}


bool insert_at_position(Node *&head,Node *&tail,int pos, int val)
{    Node *newNode = new Node(val);
     sz++;
     if( pos == 0 || head == NULL){
        insert_at_head(head,tail,val);
        return true;
     }
     Node *tmp = head;
     for(int i=0; i<pos-1; i++){
        tmp = tmp->next;
        if(tmp == NULL){
            cout<<"invalid index"<<endl;
            return false;
        }
     }
     
     newNode->next = tmp->next;
     tmp->next = newNode;
     newNode->prev = tmp;
     if(newNode->next == NULL){
       tail = newNode;
     }

    return true;
}



void delete_at_tail(Node *&tail){
    Node *delNode = tail;
    tail = tail->prev;   
    delete delNode;
    tail->next = NULL;

}

bool delte_position(Node *&head,Node *&tail, int pos)
{   
    if(head == NULL){
        cout<<"Invalid "<<endl;
        return false;
     }
     sz--;
      Node *tmp = head;
      //minimum 1 node
      if(tmp->next == NULL){
         head = head->next;
         tail = NULL;
         delete tmp;
         return true;
      }

      if(pos == 0){
        head = head->next;
        head->prev = NULL;
        delete tmp;
        return true;

      }

   for(int i=1; i<pos-1; i++){
       tmp = tmp->next;
       if(tmp == NULL) return false;
   }
   Node *delNode = tmp->next;
   tmp->next = delNode->next;
   if(delNode->next != NULL){ //if last node..
    delNode->next->prev = tmp;
    delete delNode;
   }
   else{
    delete_at_tail(tail);
   }
   
  return true;
}

void print_list(Node *head)
{
    while (head != NULL)
    {
        cout << head->value << " ";
        head = head->next;
    }
    cout << endl;
}

void reverse_print(Node *tail)
{
    while (tail != NULL)
    {
        cout << tail->value << " ";
        tail = tail->prev;
    }
    cout << endl;
}


void reverse(Node *&head, Node *&tail){
     Node *i = head;
     Node *j = tail;
     while(i!=j && i->prev != j->prev){
        swap(i->value,j->value);
        i = i->next;
        j = j->prev;
     }
}

int main()
{   cout<<"insert your query number "<<endl;
    int q;
    cin >> q;
        cout<<"input 0 to insert head and value "<<endl;
        cout<<"input 1 to insert at tail and value "<<endl;
        cout<<"input 2 to insert at position and value  "<<endl;
        cout<<"input 3 to delte from position"<<endl;
        cout<<"input 4 to reverse link list"<<endl;
    Node *head = NULL;
    Node *tail = NULL;
    while (q--)
    {
        int x, val, pos;
        bool flag = true;
       
        cin >> x;
        if (x == 0)
        {
            cin >> val;            
            insert_at_head(head, tail, val);
        }
        else if (x == 1)
        {
            cin >> val;
            insert_at_tail(head, tail, val);
        }
        else if (x == 2)
        {
            cin >> pos;
            cin >> val;
            flag =  insert_at_position(head,tail,pos,val);
            
        }
        else if(x == 3){
            cin>>pos;
            flag = delte_position(head,tail,pos);
        }

        else if(x == 4){
             reverse(head,tail);
        }
          if(flag){
            cout<<"Link list forward :"; print_list(head);
            cout<<"Link list reverse :"; reverse_print(tail);
            cout<<"size :"<<sz<<endl;

          }
            
            
    }

    print_list(head);
    reverse_print(tail);
    return 0;
}