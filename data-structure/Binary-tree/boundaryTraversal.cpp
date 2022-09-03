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
void LbNonLeaf(treeNode *root)
{
    if (root == NULL)
        return;
    if (root->leftChild != NULL)
    {
        cout << root->value << " ";
        LbNonLeaf(root->leftChild);
    }
    else if (root->rightChild != NULL)
    {
        cout << root->value << " ";
        LbNonLeaf(root->rightChild);
    }
}
void printLeaf(treeNode *root)
{
    if (root == NULL)
    {
        return;
    }
    if (root->leftChild == NULL && root->rightChild == NULL)
    {
        cout << root->value << " ";
    }
    printLeaf(root->leftChild);
    printLeaf(root->rightChild);
}
void RbNonLeaf(treeNode *root)
{
    if (root == NULL)
        return;
    if (root->rightChild != NULL)
    {
        cout << root->value << " ";
        LbNonLeaf(root->rightChild);
    }
    else if (root->leftChild != NULL)
    {
        cout << root->value << " ";
        LbNonLeaf(root->leftChild);
    }
}
void BoundaryTraversal(treeNode *root)
{
    // print Root
    cout << root->value << " ";
    // left Non leaf
    LbNonLeaf(root->leftChild);
    // PrintLeaf
    printLeaf(root->leftChild);
    // Right Leaf
    printLeaf(root->rightChild);

    // Right Non leaf
    RbNonLeaf(root->rightChild);
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
    cout << "Boundary of Tree : " << endl;
    BoundaryTraversal(root);
    cout << endl;
}
/*
0
1 2
3 4 5 6
-1 -1 -1 -1
7 8 -1 -1
-1 -1 -1 -1
*/
