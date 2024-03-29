#include <bits/stdc++.h>
using namespace std;
class treeNode
{
public:
    int data;
    treeNode *leftChild;
    treeNode *rightChild;
    treeNode(int value)
    {
        this->data = value;
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
        cout << root->data << endl;
        return;
    }
    else
    {
        cout << endl;
        spaces(level);
        cout << "Root : ";
        cout << root->data;
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
void findKNodeinOrder(treeNode *root, int k)
{
    static int count = 0;
    if (root == NULL)
    {
        return;
    }
    if (count <= k)
    {
        findKNodeinOrder(root->leftChild, k);
        count++;
        if (count == k)
        {
            cout << root->data << endl;
        }
        findKNodeinOrder(root->rightChild, k);
    }
}
int main(void)
{
    int n;
    cin >> n;
    int k;
    cin >> k;
    int a;
    cin >> a;
    queue<treeNode *> q;
    treeNode *root = new treeNode(a);
    q.push(root);
    int chk = 0;
    while (!q.empty())
    {
        treeNode *presentRoot = q.front();
        q.pop();
        int w;
        if (chk != 0)
        {
            cin >> w;
        }
        chk = 1;
        int left, right;
        cin >> left >> right;
        treeNode *leftNode = NULL;
        treeNode *rightNode = NULL;
        if (left != -1)
        {
            leftNode = new treeNode(left);
        }
        if (right != -1)
        {
            rightNode = new treeNode(right);
        }
        presentRoot->leftChild = leftNode;
        presentRoot->rightChild = rightNode;
        if (leftNode != NULL)
            q.push(leftNode);
        if (rightNode != NULL)
            q.push(rightNode);
    }
    printTree(root, 0);
    findKNodeinOrder(root, k);
}

/*
5 2
1 2 3
2 4 5
3 -1 -1
4 -1 -1
5 -1 -1

         1
        / \
       2   3
      / \
     4   5


*/