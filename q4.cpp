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
bool checkSymmetric(treeNode *root1, treeNode *root2)
{
    if (root1 == NULL && root2 == NULL)
    {
        return true;
    }
    if (root1 == NULL || root2 == NULL)
    {
        return false;
    }
    if (root1->value == root2->value)
    {
        return checkSymmetric(root1->leftChild, root2->rightChild) && checkSymmetric(root1->rightChild, root2->leftChild);
    }

    return false;
}
bool isSymmetric(treeNode *root)
{
    if (root == NULL)
    {
        return false;
    }
    if (root->leftChild == NULL && root->rightChild == NULL)
    {
        return true;
    }
    return checkSymmetric(root->leftChild, root->rightChild);
    cout << endl;
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
    cout << isSymmetric(root) << endl;
}
/*
0
1 2
3 4 5 6
-1 -1 -1 -1
7 8 -1 -1
-1 -1 -1 -1
*/
/*
0
1 3
3 4 5 6
-1 -1 -1 -1
7 8 -1 -1
-1 -1 -1 -1
*/
/*
3 9 20
-1 -1 15 7
-1 -1 -1 -1
*/