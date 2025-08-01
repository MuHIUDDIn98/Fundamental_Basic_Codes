#include<bits/stdc++.h>
using namespace std;


    template <typename T>
    class BinaryTreeNode
    {
        public :
        T data;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T data)
        {
            this -> data = data;
            left = NULL;
            right = NULL;
        }
    };



bool isNodePresentLevelOrderSearch(BinaryTreeNode<int> *root, int x) {

    if (root == NULL) return false;

    queue<BinaryTreeNode<int>*> q;
    q.push(root);

    while (!q.empty()) {
        BinaryTreeNode<int>* curr = q.front();
        q.pop();

        if (curr->data == x) {
            return true;
        }

        if (curr->left) q.push(curr->left);
        if (curr->right) q.push(curr->right);
    }

    return false;

}


bool isNodePresent(BinaryTreeNode<int> *root, int x) {

    // Write your code here
    if(root== NULL) return false;
    if(root->data == x) return true;

    bool l = isNodePresent(root->left, x);
    bool r = isNodePresent(root->right, x);

    return l || r;


}









int main(){

BinaryTreeNode<int> *root = new BinaryTreeNode<int>(10);
BinaryTreeNode<int> *a = new BinaryTreeNode<int>(20);
BinaryTreeNode<int> *b = new BinaryTreeNode<int>(30);
BinaryTreeNode<int> *c = new BinaryTreeNode<int>(40);
BinaryTreeNode<int> *d = new BinaryTreeNode<int>(50);
BinaryTreeNode<int> *e = new BinaryTreeNode<int>(60);
BinaryTreeNode<int> *f = new BinaryTreeNode<int>(70);
BinaryTreeNode<int> *g = new BinaryTreeNode<int>(80);
BinaryTreeNode<int> *h = new BinaryTreeNode<int>(90);
BinaryTreeNode<int> *i = new BinaryTreeNode<int>(100);

    
    root->left = a;
    root->right = b;
    a->left = c;
    a->right = h;
    b->right = d;
    c->right = e;
    h->right = i;
    d->left = f;
    d->right = g;
    
    cout<<isNodePresent(root,80)<<endl;
    cout<<isNodePresentLevelOrderSearch(root,300)<<endl;
   
return 0;
}