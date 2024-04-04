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
        return 1;
    }
    else{
        int l = Max_height_count(root->left);
        int r = Max_height_count(root->right);
        return max(l,r)+1;
    }
    
}




int main(){
    Node *root = input_tree();
    if(Node_count(root) == pow(2,(Max_height_count(root)))-1){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }


    return 0;
}