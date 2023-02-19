#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int n;
    cin >> n;
    int k;
    cin >> k;
    vector<long long> adj_list[n+1];
    for (int i = 0; i < k; i++)
    {
        long long op;
        cin >> op;
        if (op == 1)
        {
            long long u, v;
            cin >> u >> v;
            adj_list[u].push_back(v);
            adj_list[v].push_back(u);
        }
        else if (op == 2)
        {
            long long u;
            cin >> u;
            if (adj_list[u].size() > 0)
            {
                for (int node : adj_list[u])
                {
                    cout << node << " ";
                }
            }
        }
    }
}