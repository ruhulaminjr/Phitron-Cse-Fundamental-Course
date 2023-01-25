#include <bits/stdc++.h>
using namespace std;
vector<pair<int, int>> edges_list;
vector<int> parent;
int find_parent(int x)
{
    if (parent[x] == -1)
        return x;
    return find_parent(parent[x]);
}
int main(void)
{
    int n, m;
    cin >> n >> m;
    parent.resize(n, -1);
    while (m--)
    {
        int u, v;
        cin >> u >> v;
        edges_list.push_back({u, v});
    }
    bool chk = false;
    for (auto edges : edges_list)
    {
        int a = edges.first;
        int b = edges.second;
        int parentA = find_parent(a);
        int parentB = find_parent(b);
        if (parentA == parentB)
        {
            chk = true;
            break;
        }
        parent[parentB] = parentA;
    }
    if (chk)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}