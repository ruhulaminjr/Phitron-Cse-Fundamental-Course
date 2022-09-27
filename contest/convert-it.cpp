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
void insert(Node *&root, int val)
{
    if (root == NULL)
    {
        root = new Node(val);
        return;
    }
    if (val > root->val)
    {
        insert(root->right, val);
    }
    else
    {
        insert(root->left, val);
    }
}
void insertPq(Node *root, priority_queue<int> &pq)
{
    if(root == NULL) return;
    insertPq(root->left,pq);
    pq.push(root->val);
    insertPq(root->right,pq);
}
int main(void)
{
    queue<Node *> q;
    int n;
    cin >> n;
    Node *root = new Node(n);
    q.push(root);
    while (!q.empty())
    {
        Node *top = q.front();
        q.pop();
        int l, r;
        cin >> l >> r;

        if (l != -1)
        {
            Node *left = new Node(l);
            top->left = left;
            q.push(left);
        }
        if (r != -1)
        {
            Node *right = new Node(r);
            top->right = right;
            q.push(right);
        }
    }
    priority_queue<int> pq;
    insertPq(root,pq);
    int x;
    cin >> x;
    while (x--)
    {
        int t;
        cin >> t;
        if (t == 1)
        {
            // insert element;
            int val;
            cin >> val;
            // insert(root, val);
            pq.push(val);
        }
        else
        {
            cout<<pq.top()<<endl;
            pq.pop();
        }
    }
}