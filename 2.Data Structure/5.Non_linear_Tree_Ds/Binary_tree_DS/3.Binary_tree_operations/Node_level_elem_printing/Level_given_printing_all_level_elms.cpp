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




void find_level_elems(Node* root, int searchedLevel)
{
    // Write your code here.
     queue<pair<Node*,int>> q;

     q.push({root,0});
     int level;
    while(!q.empty()){
        pair<Node*,int> pr = q.front();
        Node* node = pr.first;
        int level = pr.second;
        q.pop();

        
        if(level == searchedLevel){
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




int find_level(Node *root){

    queue<pair<Node*,int>> q;
    q.push({root,0});
     int level;
    while(!q.empty()){
        pair<Node*,int> pr = q.front();
        Node* node = pr.first;
        int level = pr.second;
        q.pop();

       

        if (node->left) {
            q.push({node->left,level+1});
        }
        if (node->right) {
            q.push({node->right,level+1});
        }
    }   
   return level;
}





int main(){

    Node *root = input_tree();
    int level;
    cin>>level;

    if(level >= 0 && level <= find_level(root)){
       find_level_elems(root,level);
    }
    else{

        cout<<"Invalid"<<endl;
    }

    
    

    return 0;
}