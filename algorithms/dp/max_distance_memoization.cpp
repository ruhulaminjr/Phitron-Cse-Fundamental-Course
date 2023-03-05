#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 5;
vector<int> parent_list[N];
int dp[N];
int root, target;
int max_distance(int node)
{
    // base case
    if (node == root)
    {
        return 0;
    }
    // if already calculate sub problem then return calculated value
    if (dp[node] != -1)
    {
        return dp[node];
    }
    int ans = 0;
    for (int parent : parent_list[node])
    {
        int par_dis = max_distance(parent);
        ans = max(ans, par_dis);
    }
    ans++;
    return dp[node] = ans;
}
int main(void)
{
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        parent_list[v].push_back(u);
    }
    for (int i = 0; i <= n; i++)
    {
        dp[i] = -1;
    }
    cin >> root >> target;
    cout << max_distance(target) << endl;
    return 0;
}