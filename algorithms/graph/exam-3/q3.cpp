#include <bits/stdc++.h>
using namespace std;

const int N = 101;
vector<int> adj_list[N];
bool visited[N];
void dfs(int src, stack<int> &st)
{
    visited[src] = true;
    for (int adj_node : adj_list[src])
    {
        if (visited[adj_node] == false)
        {
            dfs(adj_node, st);
        }
    }
    st.push(src);
}
int main(void)
{
    for (int i = 2; i <= N; i++)
    {
        for (int j = 2; j <= N; j++)
        {
            if (i * 2 == j)
            {
                adj_list[i].push_back(j);
            }
        }
    }
    int l_path = 0;
    for (int i = 2; i < N; i++)
    {
        if (visited[i] == false)
        {
            stack<int> st;
            dfs(i, st);
            if (st.size() > l_path)
            {
                l_path = st.size();
            }
        }
    }
    cout << "Longest path is " << l_path << endl;
}