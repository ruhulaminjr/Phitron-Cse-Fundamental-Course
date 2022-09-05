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

void getAns(treeNode *root, vector<int> &v)
{
    if (root == NULL)
        return;
    getAns(root->leftChild, v);
    getAns(root->rightChild, v);
    v.push_back(root->value);
}
bool isSame(treeNode *root1, treeNode *root2)
{
    vector<int> a;
    vector<int> b;
    getAns(root1, a);
    getAns(root2, b);
    return a == b;
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
    cout << "Enter Root 2 " << endl;
    int b;
    cin >> b;
    treeNode *root2 = new treeNode(b);
    queue<treeNode *> q1;
    q1.push(root2);
    while (!q1.empty())
    {
        treeNode *presentRoot = q1.front();
        q1.pop();
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
            q1.push(leftNode);
        if (rightNode != NULL)
            q1.push(rightNode);
    }
    printTree(root2,0);
    cout << isSame(root, root2) << endl;
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
