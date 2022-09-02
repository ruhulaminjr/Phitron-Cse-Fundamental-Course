#include <bits/stdc++.h>
using namespace std;
class treeNode
{
public:
    int data;
    treeNode *leftChild;
    treeNode *rightChild;
    treeNode(int val)
    {
        data = val;
        leftChild = NULL;
        rightChild = NULL;
    }
};
void spaces(int level)
{
    for (int i = 0; i < level; i++)
    {
        cout << "   ";
    }
}
void display(treeNode *root, int level)
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
        cout << root->data << endl;
    }
    if (root->leftChild != NULL)
    {
        spaces(level);
        cout << "Left : ";
        display(root->leftChild, level + 1);
    }
    if (root->rightChild != NULL)
    {
        spaces(level);
        cout << "Right : ";
        display(root->rightChild, level + 1);
    }
}
int main(void)
{
    int n, k;
    cin >> n;
    cin >> k;
    treeNode *allNodes[10];
    for (int i = 0; i < 10; i++)
    {
        allNodes[i] = new treeNode(-1);
    }
    for (int i = 0; i < n; i++)
    {
        int value, left, right;
        cin >> value >> left >> right;
        allNodes[i]->data = value;
        cout<<endl;
        
        if (left != -1)
        {
            allNodes[i]->leftChild = allNodes[left];
            
        }
        if (right != -1)
        {
            allNodes[i]->rightChild = allNodes[right];
        }
    }
    display(allNodes[0], 0);
}
/*
7 4
1 2 3
2 4 5
3 7 8
4 -1 -1
5 -1 -1
7 -1 -1
8 -1 -1
*/