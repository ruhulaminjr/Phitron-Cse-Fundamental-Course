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

void level_order(treeNode *root)
{
    if (root == NULL)
    {
        return;
    }
    queue<treeNode *> q;
    q.push(root);
    q.push(NULL);
    while (!q.empty())
    {
        treeNode *Node = q.front();
        q.pop();
        if (Node != NULL)
        {
            cout << Node->value << " ";
            if (Node->leftChild != NULL)
            {
                q.push(Node->leftChild);
            }
            if (Node->rightChild != NULL)
            {
                q.push(Node->rightChild);
            }
        }
        else if (!q.empty())
        {
            q.push(NULL);
        }
    }
    cout << endl;
}


bool is_unival(treeNode *root)
{
    if (root == NULL)
    {
        return true;
    }
    if (root->leftChild != NULL && root->value != root->leftChild->value)
    {
        return false;
    }
    if (root->rightChild != NULL && root->value != root->rightChild->value)
    {
        return false;
    }
    return is_unival(root->leftChild) && is_unival(root->rightChild);
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
    cout << is_unival(root) << endl;
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