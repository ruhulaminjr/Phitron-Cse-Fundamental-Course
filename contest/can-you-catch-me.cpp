#include <bits/stdc++.h>
using namespace std;
bool palidromeChk(string a)
{
    string b = a;
    reverse(a.begin(), a.end());
    return a == b;
}
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
void bfs(Node *root, string &s, string str, int &count,int r)
{
    if (root == NULL)
        return;
    s += str[root->val];
    if (root->left == NULL && root->right == NULL)
    {
        cout << s << endl;
        if (palidromeChk(s))
        {
            count++;
        };
        s = str[r];
    }
    else
    {
        bfs(root->left, s, str, count,r);
        bfs(root->right, s, str, count,r);
    }
}
int main(void)
{
    string str;
    cin >> str;
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
    string a;
    int count = 0;
    bfs(root, a, str, count,root->val);
    cout << count << endl;
}