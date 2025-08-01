#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int value;
    Node *left;
    Node *right;

    Node(int value)
    {
        this->value = value;
        this->right = NULL;
        this->left = NULL;
    }
};

void decending_leaf_node(Node *root)
{

    queue<Node *> q;
    vector<int> leaf_values;
    if (root == NULL)
    {
        return;
    }
    else
    {
        q.push(root);
    }

    while (!q.empty())
    {
        Node *f = q.front();
        q.pop();

        if (f->left == NULL && f->right == NULL)
        {
            leaf_values.push_back(f->value);
        }

        if (f->left)
            q.push(f->left);
        if (f->right)
            q.push(f->right);
    }

    sort(leaf_values.rbegin(), leaf_values.rend());

    for (int val : leaf_values)
    {
        cout << val << " ";
    }


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
        if (L == -1)
        {
            myleft = NULL;
        }

        else
        {
            myleft = new Node(L);
        }

        if (R == -1)
        {
            myright = NULL;
        }

        else
        {
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

int main()
{   //write your code here 
    Node *root = input_tree();
    decending_leaf_node(root);


    return 0;
}
