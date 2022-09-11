#include <bits/stdc++.h>
using namespace std;

class TreeNode
{
public:
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int data)
    {
        this->val = data;
        this->left = NULL;
        this->right = NULL;
    }
};
void inOrderPrint(TreeNode *root)
{
    if (root == NULL)
        return;
    inOrderPrint(root->left);
    cout << root->val << " ";
    inOrderPrint(root->right);
}
TreeNode *makeBST(TreeNode *root, int val)
{
    TreeNode *newNode = new TreeNode(val);
    if (root == NULL)
    {
        root = newNode;
        return root;
    }

    if (val < root->val)
    {
        root->left = makeBST(root->left, val);
    }
    else if (val > root->val)
    {
        root->right = makeBST(root->right, val);
    }

    return root;
}
TreeNode *searchBST(TreeNode *root, int val)
{
    if (root == NULL)
        return NULL;
    if (root->val == val)
    {
        cout << root->val << " " << endl;
        return root;
    }
    else if (val < root->val)
    {
        cout << root->val << "->";
        searchBST(root->left, val);
    }
    else
    {
        cout << root->val << "->";
        searchBST(root->right, val);
    }
}
TreeNode *inorderSucc(TreeNode *root)
{
    TreeNode *curr = root;
    while (curr->left != NULL)
    {
        curr = curr->left;
    }
    return curr;
}
TreeNode *deleteBST(TreeNode *root, int val)
{
    if (val == root->val)
    {
        if (root->left == NULL)
        {
            TreeNode *temp = root;
            root = root->right;
            free(temp);
        }
        else if (root->right == NULL)
        {
            TreeNode *temp = root;
            root = root->left;
            free(temp);
        }
        else
        {
            TreeNode *inOrderRoot = inorderSucc(root->right);
            root->val = inOrderRoot->val;
            deleteBST(root->right, inOrderRoot->val);
        }
    }
    else if (val < root->val)
    {
        root->left = deleteBST(root->left, val);
    }
    else if (val > root->val)
    {
        root->right = deleteBST(root->right, val);
    }
    return root;
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
        root = makeBST(root, val);
    }

    inOrderPrint(root);
    cout << endl;
    cout << "Enter Value You Want To Search : ";
    int s;
    cin >> s;
    TreeNode *src;
    src = searchBST(root, s);
    if (src == NULL)
        cout << "No Element Found" << endl;
    else
    {
        cout << "Value Found " << endl;
    }
    cout << "Delete at BST : ";
    int d;
    cin >> d;
    deleteBST(root, d);
    cout << "After Deletion : " << endl;
    inOrderPrint(root);
    cout << endl;
}
/*
9
11 5 9 43 34 1 2 7 21
*/