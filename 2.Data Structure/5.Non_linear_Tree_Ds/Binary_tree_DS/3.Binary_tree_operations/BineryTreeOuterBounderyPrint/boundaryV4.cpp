#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *left;
    Node *right;
    Node(int val)
    {
        this->val = val;
        left = right = NULL;
    }
};

Node *inputTree()
{
    int val;
    cin >> val;
    if (val == -1)
        return NULL;
    Node *root = new Node(val);
    queue<Node *> q;
    q.push(root);
    while (!q.empty())
    {
        Node *current = q.front();
        q.pop();
        int l, r;
        cin >> l >> r;
        if (l != -1)
        {
            current->left = new Node(l);
            q.push(current->left);
        }
        if (r != -1)
        {
            current->right = new Node(r);
            q.push(current->right);
        }
    }
    return root;
}

bool isLeaf(Node *node)
{
    return node && node->left == NULL && node->right == NULL;
}

// Print left boundaries functions
void printLeft(Node *node)
{
    if (!node)
        return;

    if (isLeaf(node))
    {
        cout << node->val << " ";
        return;
    }

    if (node->left)
    {
        printLeft(node->left);
    }
    else
    {
        printLeft(node->right);
    }

    cout << node->val << " ";
}

// Print right boundaries
void printRight(Node *node)
{
    if (!node)
        return;

    if (isLeaf(node))
    {
        cout << node->val << " ";
        return;
    }

    cout << node->val << " ";

    if (node->right)
    {
        printRight(node->right);
    }
    else
    {
        printRight(node->left);
    }
}

int main()
{
    Node *root = inputTree();

    if (!root)
        return 0;

    // Print left boundaries
    printLeft(root->left);

    // Print root
    cout << root->val << " ";

    // Print right boundaries
    printRight(root->right);

    cout << endl;

    return 0;
}