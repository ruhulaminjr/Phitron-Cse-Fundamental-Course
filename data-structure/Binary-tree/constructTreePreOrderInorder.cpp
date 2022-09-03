#include <bits/stdc++.h>
using namespace std;

class treeNode
{
public:
    int data;
    treeNode *left;
    treeNode *right;
    treeNode(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};
void inOrderTraversal(treeNode *root, string &str)
{
    if (root == NULL)
        return;
    inOrderTraversal(root->left, str);
    str += to_string(root->data);
    inOrderTraversal(root->right,str);
}
int searchPos(int inOrder[], int current, int start, int end)
{
    for (int i = start; i <= end; i++)
    {
        if (inOrder[i] == current)
        {
            return i;
        }
    }
    return -1;
}
treeNode *buildTreeInorderPreOrder(int inOrder[], int preOrder[], int start, int end)
{
    static int id = 0;
    int current = preOrder[id];
    id++;
    treeNode *newNode = new treeNode(current);
    if (start == end)
    {
        return newNode;
    }
    int pos = searchPos(inOrder, current, start, end);
    newNode->left = buildTreeInorderPreOrder(inOrder, preOrder, start, pos - 1);
    newNode->right = buildTreeInorderPreOrder(inOrder, preOrder, pos + 1, end);
    return newNode;
}
int main(void)
{
    int n;
    cin >> n;
    int inOrder[n], preOrder[n];
    for (int i = 0; i < n; i++)
    {
        cin >> inOrder[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> preOrder[i];
    }
    treeNode *root = buildTreeInorderPreOrder(inOrder, preOrder, 0, n - 1);
    string inOrderStr = "";
    inOrderTraversal(root, inOrderStr);
    cout << inOrderStr << endl;
}
/*
9
3 1 4 0 7 5 8 2 6
0 1 3 4 2 5 7 8 6
*/