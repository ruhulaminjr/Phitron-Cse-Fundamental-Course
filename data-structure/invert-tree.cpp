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
        left = NULL;
        right = NULL;
    }
};

Node *invert_tree(Node *root)
{
    if (root == NULL)
        return NULL;
    Node *temp = root->left;
    root->left = root->right;
    root->right = temp;
    invert_tree(root->left);
    invert_tree(root->right);
    return root;
}
