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

int Node_count(Node *root){
    if(root==NULL){
        return 0;
    }
    int l = Node_count(root->left);
    int r = Node_count(root->right);
    return l+r+1;
}


int Max_height_count(Node *root){
    if(root==NULL){
        return 0;
    }
    if(root->left == NULL && root->right == NULL){
        return 0;
    }
    else{
        int l = Max_height_count(root->left);
        int r = Max_height_count(root->right);
        return max(l,r)+1;
    }
    
}





int leaf_Node_count(Node *root){
    if(root==NULL){
        return 0;
    }
    if(root->left == NULL && root->right == NULL){
        return 1;
    }
    else{
        int l = leaf_Node_count(root->left);
        int r = leaf_Node_count(root->right);
        return l+r;
    }
    
}

int main(){
    Node *root = input_tree();
   cout<<endl;
   level_order(root);
   cout<<endl;
    cout<<"Node count :"<<Node_count(root)<<endl;
    cout<<"leaf Node count :"<<leaf_Node_count(root)<<endl;
    cout<<"Max height count :"<<Max_height_count(root)<<endl;


    return 0;
}