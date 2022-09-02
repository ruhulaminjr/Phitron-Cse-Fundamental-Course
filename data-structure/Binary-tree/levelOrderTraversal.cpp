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
    int n;
    cin >> n;
    treeNode *allNodes[n];
    for (int i = 0; i < n; i++)
    {
        allNodes[i] = new treeNode(-1);
    }
    for (int i = 0; i < n; i++)
    {
        int val, left, right;
        cin >> val >> left >> right;
        allNodes[i]->data = val;
        if (left != -1)
        {
            allNodes[i]->left = allNodes[left];
        }
        if (right != -1)
        {
            allNodes[i]->right = allNodes[right];
        }
    }
    cout << levelOrderTraversal(allNodes[0]) << endl;
}