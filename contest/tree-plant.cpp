#include <bits/stdc++.h>

using namespace std;
class Node
{
public:
    int val;
    Node *left;
    Node *right;
    Node(int data)
    {
        val = data;
        left = NULL;
        right = NULL;
    }
};
void bfs(Node *&root, int n, int parent)
{
    if (n == 1)
        return;
    root->left = new Node(root->val + parent);
    root->right = new Node(root->val + parent);
    bfs(root->left, n - 1, parent + root->val);
    bfs(root->right, n - 1, parent + root->val);
}
void sum(Node *root, long long int &s)
{
    if (root == NULL)
        return;
    if (root->left == NULL && root->right == NULL)
    {
        // cout << root->val << endl;
        s += root->val;
    }
    sum(root->left, s);
    sum(root->right, s);
}
int main()
{
    Node *root;
    root = new Node(1);
    int y;
    cin >> y;
    if (y == 0)
    {
        cout << 1 << endl;
    }
    else
    {
        bfs(root, y, 0);
        long long int s = 0;
        sum(root, s);
        cout << s << endl;
    };

    return 0;
}
