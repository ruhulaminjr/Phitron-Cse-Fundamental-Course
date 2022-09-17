#include <bits/stdc++.h>
using namespace std;

class TreeNode
{
public:
    int data;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int value)
    {
        data = value;
        left = NULL;
        right = NULL;
    }
};
void insertBst(TreeNode *&root, int val)
{
    if (root == NULL)
    {
        root = new TreeNode(val);
        return;
    }
    if (val < root->data)
    {
        insertBst(root->left, val);
    }
    if (val > root->data)
    {
        insertBst(root->right, val);
    }
}

void zigzagBst(TreeNode *root)
{
    stack<TreeNode *> current;
    stack<TreeNode *> next;
    bool leftToRight = true;
    current.push(root);
    while (!current.empty())
    {
        TreeNode *x = current.top();
        current.pop();
        cout << x->data << " ";
        if (leftToRight)
        {
            if (x->left)
                next.push(x->left);
            if (x->right)
                next.push(x->right);
        }
        else
        {
            if (x->right)
                next.push(x->right);
            if (x->left)
                next.push(x->left);
        }
        if (current.empty())
        {
            leftToRight = !leftToRight;
            swap(current, next);
        }
    }
}
int main(void)
{
    int n;
    cin >> n;
    TreeNode *root = NULL;
    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        insertBst(root, val);
    }
    zigzagBst(root);
    cout << endl
         << endl;
}