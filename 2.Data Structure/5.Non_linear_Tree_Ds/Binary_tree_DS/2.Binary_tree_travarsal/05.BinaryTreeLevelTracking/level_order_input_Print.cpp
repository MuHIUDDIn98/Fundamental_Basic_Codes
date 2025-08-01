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


void printLevel(Node* root, int targetLevel) {
    if (!root) return;
    bool valid = false;
    queue<pair<Node*, int>> q;
    q.push({root, 0});

    //cout << "Nodes at level " << targetLevel << ": ";
    while (!q.empty()) {
        Node* node = q.front().first;
        int level = q.front().second;
        q.pop();

        if (level == targetLevel) {
            cout << node->value << " ";
            valid =  true;
        }

        if (node->left)
            q.push({node->left, level + 1});
        if (node->right)
            q.push({node->right, level + 1});
    }
    //cout << endl;
    if(!valid){
        cout<<"Invalid"<<endl;
    }
}


int main(){

    // Write your code here
    int level;
    Node * r = input_tree();
    cin>>level;
    printLevel(r,level);

   
return 0;
}