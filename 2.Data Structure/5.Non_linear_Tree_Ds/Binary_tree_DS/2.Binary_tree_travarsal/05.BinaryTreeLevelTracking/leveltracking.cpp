#include <bits/stdc++.h>
using namespace std;

/************************************************************

    Following is the TreeNode class structure

************************************************************/
template <typename T>
class TreeNode {
public:
    T val;
    TreeNode<T> *left;
    TreeNode<T> *right;

    TreeNode(T val) {
        this->val = val;
        left = NULL;
        right = NULL;
    }
};

/************************************************************

    Function to find the level of a node with a given value

************************************************************/
int nodeLevel(TreeNode<int>* root, int searchedValue) {
    if (root == NULL) return -1;

    queue<pair<TreeNode<int>*, int>> q;
    q.push({root, 1}); // Start from level 1

    while (!q.empty()) {
        pair<TreeNode<int>*, int> pr = q.front();
        TreeNode<int>* node = pr.first;
        int level = pr.second;
        q.pop();

        if (node->val == searchedValue) {
            return level;
        }

        if (node->left) {
            q.push({node->left, level + 1});
        }
        if (node->right) {
            q.push({node->right, level + 1});
        }
    }

    return -1; // If searchedValue not found
}




void printLevel(TreeNode<int>* root, int targetLevel) {
    if (!root) return;

    queue<pair<TreeNode<int>*, int>> q;
    q.push({root, 1});

    cout << "Nodes at level " << targetLevel << ": ";
    while (!q.empty()) {
        TreeNode<int>* node = q.front().first;
        int level = q.front().second;
        q.pop();

        if (level == targetLevel) {
            cout << node->val << " ";
        }

        if (node->left)
            q.push({node->left, level + 1});
        if (node->right)
            q.push({node->right, level + 1});
    }
    cout << endl;
}








/************************************************************

    Main function to test

************************************************************/
int main() {
    // Constructing a simple binary tree:
    //            10(root)
    //         /       \
    //       (a)20     (b)30
    //      /    \        \
    //   (c)40  (h)90     (d)50
    //      \      \     /     \
    //   (e)60 (i)100  (f)70  (g)80

TreeNode<int> *root = new TreeNode<int>(10);
TreeNode<int> *a = new TreeNode<int>(20);
TreeNode<int> *b = new TreeNode<int>(30);
TreeNode<int> *c = new TreeNode<int>(40);
TreeNode<int> *d = new TreeNode<int>(50);
TreeNode<int> *e = new TreeNode<int>(60);
TreeNode<int> *f = new TreeNode<int>(70);
TreeNode<int> *g = new TreeNode<int>(80);
TreeNode<int> *h = new TreeNode<int>(90);
TreeNode<int> *i = new TreeNode<int>(100);

    
    root->left = a;
    root->right = b;
    a->left = c;
    a->right = h;
    b->right = d;
    c->right = e;
    h->right = i;
    d->left = f;
    d->right = g;

    int searchValue = 50;
    int level = nodeLevel(root, searchValue);

    if (level != -1)
        cout << "Node " << searchValue << " is at level " << level << endl;
    else
        cout << "Node " << searchValue << " not found in the tree." << endl;


    printLevel(root,3);






    return 0;
}
