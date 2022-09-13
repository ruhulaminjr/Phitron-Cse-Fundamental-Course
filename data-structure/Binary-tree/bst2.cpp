// Impement Binary Tree and Height Balanced Binary Tree

#include <bits/stdc++.h>

using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;
    Node(int value)
    {
        data = value;
        this->left = NULL;
        this->right = NULL;
    }
};

void insert_bst(Node *&root, int val)
{
    if (root == NULL)
    {
        root = new Node(val);
        return;
    }
    if (val < root->data)
        insert_bst(root->left, val);
    if (val > root->data)
        insert_bst(root->right, val);
}
void level_order_traversal(Node *root)
{
    queue<Node *> q;
    q.push(root);
    while (!q.empty())
    {
        Node *front = q.front();
        q.pop();
        cout << front->data << endl;
        if (front->left)
            q.push(front->left);
        if (front->right)
            q.push(front->right);
    }
}
// make height balanced binary tree
Node *makeHbBinaryTree(int left, int right, int arr[])
{
    if (left > right)
    {
        return NULL;
    }
    int mid = left + (right - left) / 2;
    Node *newNode = new Node(arr[mid]);
    newNode->left = makeHbBinaryTree(left, mid - 1, arr);
    newNode->right = makeHbBinaryTree(mid + 1, right, arr);
    return newNode;
}
int main(void)
{
    int n;
    cin >> n;
    Node *root = NULL;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        // int val;
        // cin >> val;
        // insert_bst(root, val);
        cin >> arr[i];
    }
    root = makeHbBinaryTree(0, n - 1, arr);
    level_order_traversal(root);
}