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
    int n, k;
    cin >> n >> k;
    // treeNode *root = new treeNode(1);
    // treeNode *left = new treeNode(2);
    // left->leftChild = new treeNode(4);
    // left->rightChild = new treeNode(5);
    // root->leftChild = left;
    // root->rightChild = new treeNode(3);

    treeNode *allNodes[10];

    for (int i = 0; i < 10; i++)
    {
        allNodes[i] = new treeNode(-1);
    }
    for (int i = 1; i < n + 1; i++)
    {
        int value, leftVal, rightVal;
        cin >> value >> leftVal >> rightVal;
        allNodes[i]->data = value;
        if (leftVal != -1)
        {
            allNodes[i]->leftChild = allNodes[leftVal];
        }
        if (rightVal != -1)
        {
            allNodes[i]->rightChild = allNodes[rightVal];
        }
    }
    printTree(allNodes[1], 0);
    findKNodeinOrder(allNodes[1], 4);
}

/*
5
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