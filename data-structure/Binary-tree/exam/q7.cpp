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

int result = 0;
int depthFirstSearch(treeNode *root)
{
    if (root == NULL)
    {
        return 0;
    }
    int left = depthFirstSearch(root->leftChild);
    int right = depthFirstSearch(root->rightChild);
    int tilt = abs(left - right);
    result += tilt;
    return root->value + left + right;
}
int findTilt(treeNode *root)
{
    if (root == NULL)
    {
        return 0;
    }
    depthFirstSearch(root);
    return result;
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
    cout << findTilt(root) << endl;
}
/*
4
2 7
1 3 6 9
-1 -1 -1 -1
-1 -1 -1 -1
*/