#include <bits/stdc++.h>
using namespace std;
class treeNode
{
public:
    int value;
    treeNode *leftChild;
    treeNode *rightChild;
    treeNode(int value)
    {
        this->value = value;
        this->leftChild = NULL;
        this->rightChild = NULL;
    }
};
void spaces(int level)
{
    for (int i = 0; i < level; i++)
    {
        cout << "  ";
    }
}
void printTree(treeNode *root, int level)
{
    if (root == NULL)
    {
        return;
    }
    if (root->leftChild == NULL && root->rightChild == NULL)
    {
        cout << root->value << endl;
        return;
    }
    else
    {
        cout << endl;
        spaces(level);
        cout << "Root : ";
        cout << root->value;
        cout << endl;
    }
    if (root->leftChild != NULL)
    {
        spaces(level);
        cout << "Left : ";
        printTree(root->leftChild, level + 1);
    }
    if (root->rightChild != NULL)
    {
        spaces(level);
        cout << "Right : ";
        printTree(root->rightChild, level + 1);
    }
}
void InOrderTrav(treeNode *root, string &str)
{
    if (root == NULL)
    {
        return;
    }
    InOrderTrav(root->leftChild, str);
    str += to_string(root->value);
    InOrderTrav(root->rightChild, str);
}
void postOrderTrav(treeNode *root, string &str)
{
    if (root == NULL)
    {
        return;
    }
    postOrderTrav(root->leftChild, str);
    postOrderTrav(root->rightChild, str);
    str += to_string(root->value);
}
void preOrderTrav(treeNode *root, string &str)
{
    if (root == NULL)
    {
        return;
    }
    str += to_string(root->value);
    // cout<<root->value<< " ";
    preOrderTrav(root->leftChild, str);
    preOrderTrav(root->rightChild, str);
}
int main(void)
{
    int a;
    cin >> a;
    treeNode *root = new treeNode(a);
    queue<treeNode *> q;
    q.push(root);
    while (!q.empty())
    {
        treeNode *presentRoot = q.front();
        q.pop();
        int left, right;
        cin >> left >> right;
        treeNode *leftNode = NULL;
        treeNode *rightNode = NULL;
        if (left != -1)
            leftNode = new treeNode(left);
        if (right != -1)
            rightNode = new treeNode(right);
        presentRoot->leftChild = leftNode;
        presentRoot->rightChild = rightNode;
        if (leftNode != NULL)
            q.push(leftNode);
        if (rightNode != NULL)
            q.push(rightNode);
    }
    printTree(root, 0);
    string inOrderTraversal = " ";
    string preOrderTraversal = " ";
    string postOrderTraversal = " ";

    InOrderTrav(root, inOrderTraversal);
    cout << "Inorder Traversal : " << inOrderTraversal << endl;
    preOrderTrav(root, preOrderTraversal);
    cout << "PreOrder Traversal : " << preOrderTraversal << endl;
    postOrderTrav(root, postOrderTraversal);
    cout << "PostOrder Traversal : " << postOrderTraversal << endl;
}
/*
9
0 1 2
1 3 4
2 5 6
3 -1 -1
4 -1 -1
5 7 8
6 -1 -1
7 -1 -1
8 -1 -1
*/
