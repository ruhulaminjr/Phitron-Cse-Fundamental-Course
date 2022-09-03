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
int levelOrderTraversal(treeNode *root, int k)
{
    if (root == NULL)
    {
        return -1;
    }
    queue<treeNode *> q;
    q.push(root);
    q.push(NULL);
    int level = 0;
    int max = INT_MIN;
    while (!q.empty())
    {
        treeNode *front = q.front();
        q.pop();
        if (front != NULL)
        {
            if (level == k)
            {
                if (front->data > max)
                {
                    max = front->data;
                }
            }
            if (front->left != NULL)
                q.push(front->left);
            if (front->right != NULL)
                q.push(front->right);
        }
        else if (!q.empty())
        {
            q.push(NULL);
            level++;
        }
    }
    return max;
}
int main(void)
{
    int n, k;
    cin >> n >> k;
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
    cout << levelOrderTraversal(allNodes[0], k) << endl;
}
/*
9 2
0 1 2
1 3 4
2 5 6
3 -1 -1
4 -1 -1
5 7 8
6 -1 -1
7 -1 -1
8 -1 -1
*/