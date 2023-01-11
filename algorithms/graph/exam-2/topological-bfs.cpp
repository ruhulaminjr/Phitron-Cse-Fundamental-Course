#include <bits/stdc++.h>
using namespace std;
const int N = 2e5;
int indegree[N] = {};
vector<int> adj_list[N];
stack<int> st;
void bfs(int n)
{
    queue<int> q;
    for (int i = 1; i <= n; i++)
    {
        if (indegree[i] == 0)
        {
            q.push(i);
        }
    }
    while (!q.empty())
    {
        int head = q.front();
        q.pop();
        st.push(head);
        for (int adj_node : adj_list[head])
        {
            indegree[adj_node]--;
            if (indegree[adj_node] == 0)
            {
                q.push(adj_node);
            }
        }
    }
}
int main(void)
{
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        adj_list[u].push_back(v);
        indegree[v]++;
    }
    bfs(n);
    while (!st.empty())
    {
        cout << st.top() << " ";
        st.pop();
    }
    cout << endl;
}