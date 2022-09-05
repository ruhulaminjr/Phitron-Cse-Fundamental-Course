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
string levelOrderTraversal(treeNode *root)
{
    if (root == NULL)
    {
        return "Root is Empty ";
    }
    queue<treeNode *> q;
    q.push(root);
    q.push(NULL);
    string result = "";
    while (!q.empty())
    {
        treeNode *front = q.front();
        q.pop();
        if (front != NULL)
        {
            result += to_string(front->data);
            if (front->left != NULL)
                q.push(front->left);
            if (front->right != NULL)
                q.push(front->right);
        }
        else if (!q.empty())
        {
            q.push(NULL);
        }
    }
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
    cout << levelOrderTraversal(allNodes[0]) << endl;
}