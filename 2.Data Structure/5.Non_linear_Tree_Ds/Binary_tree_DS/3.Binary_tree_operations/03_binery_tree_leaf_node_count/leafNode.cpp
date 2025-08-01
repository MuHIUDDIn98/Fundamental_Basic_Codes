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

void pre_order(Node *root){
     if(root == NULL){
        return;
     }
     cout<<root->value<<" ";
     pre_order(root->left);
     pre_order(root->right);
     
}

int Node_count(Node *root){
    if(root==NULL){
        return 0;
    }
    int l = Node_count(root->left);
    int r = Node_count(root->right);
    return l+r+1;
}

int level_order_Node_count(Node *root){

    int count = 0;
    queue<Node*>q;

    if(root) q.push(root);
    while(!q.empty()){
        Node *f = q.front();
        q.pop();
         
        count ++;
        // cout<<f->value<<" ";

        if(f->left) q.push(f->left);
        if(f->right) q.push(f->right);
    }

    return count;
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
    Node *root = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);
    Node *d = new Node(50);
    Node *e = new Node(60);
    Node *f = new Node(70);
    Node *g = new Node(80);
    Node *h = new Node(90);
    Node *i = new Node(100);
    Node *j = new Node(101);
    Node *k = new Node(102);
    
    root->left = a;
    root->right = b;
    a->left = c;
    a->right = h;
    b->right = d;
    c->right = e;
    h->right = i;
    d->left = f;
    d->right = g;
    g->left = j;
    g->right = k;
    
    pre_order(root);
    cout<<endl;
    cout<<"Node count :"<<Node_count(root)<<endl;
    cout<<"Level order node count :"<<level_order_Node_count(root)<<endl;
    cout<<"leaf Node count :"<<leaf_Node_count(root)<<endl;


    return 0;
}