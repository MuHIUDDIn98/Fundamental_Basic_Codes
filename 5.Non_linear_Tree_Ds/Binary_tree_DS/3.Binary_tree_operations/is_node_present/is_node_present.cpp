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

bool is_node_present(Node *root,int x){
     queue<Node *> q;
     if(root){
        q.push(root);
     }

     while(!q.empty()){
        Node *p = q.front();
        q.pop();



        if(p->value == x){
            return true;
        }


        if(p->left){
            q.push(p->left);

        }
        if(p->right){
            q.push(p->right);
        }
     }


return false;
}

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
        p_q.pop();

        int L, R;
        cin >> L >> R;
        Node *myleft, *myright;
        if (L == -1){
            myleft = NULL;
        
        }
            
        else{
            myleft = new Node(L);
            
        }
            

        if (R == -1){
            myright = NULL;
            
        }
            
        else{
            myright = new Node(R);
            

        }
            
            

        p->left = myleft;
        p->right = myright;




        if (p->left)
        {
            p_q.push(p->left);
            
        }
        if (p->right)
        {
            p_q.push(p->right);

        }

        
    }

    return root;
}


void level_order(Node *root){
    queue<Node*>q;
    q.push(root);
    while(!q.empty()){
        Node *f = q.front();
        q.pop();

        cout<<f->value<<" ";

        if(f->left) q.push(f->left);
        if(f->right) q.push(f->right);
    }
}

int main(){
    Node *root = input_tree();
    level_order(root);


    if(is_node_present(root,90)){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }


    return 0;
}