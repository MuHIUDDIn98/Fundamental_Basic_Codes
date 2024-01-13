#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int value;
    Node* left;
    Node *right;

    Node(int value){
        this->value=value;
        this->right = NULL;
        this->left = NULL;
    }
};



Node *input_tree()
{

    int val;
    Node *root;
    cin >> val;
    if (val == -1)
        root = NULL;

    else
        root = new Node(val);
    queue<Node *> p_q;
    if (root)
        p_q.push(root);

    while (!p_q.empty())
    {

        Node *p = p_q.front();
        //cout<<"p "<<p->value<<" popped "<<endl;
        p_q.pop();

        int L, R;
        cin >> L >> R;
        Node *myleft, *myright;
        if (L == -1){
            myleft = NULL;
            //cout<<"Left nuLL"<<endl;
        }
            
        else{
            myleft = new Node(L);
            //cout<<"Left node creaded"<<endl;
        }
            

        if (R == -1){
            myright = NULL;
            //cout<<"right null"<<endl;
        }
            
        else{
            myright = new Node(R);
            //cout<<"right node creaded"<<endl;

        }
            
            

        p->left = myleft;
        p->right = myright;




        if (p->left)
        {
            p_q.push(p->left);
            //cout<<"Left pushed"<<endl;
        }
        if (p->right)
        {
            p_q.push(p->right);
            //cout<<"right pushed"<<endl;
        }

        
    }

    return root;
}


void level_order(Node *root)
{
    if (root == NULL)
    {
        cout << "tree empty ";
        return;
    }
    queue<Node *> q;
    q.push(root);
    while (!q.empty())
    {
        Node *f = q.front();
        q.pop();

        cout << f->value << " ";

        if (f->left)
            q.push(f->left);
        if (f->right)
            q.push(f->right);
    }
}



void find_level_elems(Node* root, int searchedValue)

   
{
    // Write your code here.
     queue<pair<Node*,int>> q;

     q.push({root,1});
     int searched_level = 0 ;
    while(!q.empty()){
        pair<Node*,int> pr = q.front();
        Node* node = pr.first;
        int level = pr.second;
        q.pop();

        
        if(node->value == searchedValue){
            searched_level = level;
            cout<<"searched_level :"<<level<<endl;
            cout<<searchedValue<<endl;         
        }
        if(level == searched_level){
            cout<<node->value<<" ";
        }


        if (node->left) {
            q.push({node->left,level+1});
        }
        if (node->right) {
            q.push({node->right,level+1});
        }
    }

    
}


int main(){

    Node *root = input_tree();
    level_order(root);
    find_level_elems(root,80);

    return 0;
}