#include <bits/stdc++.h>
using namespace std;
const int N = 1000000;
vector<int> adj_list[N] = {};
int visited[N] = {};
int color[N] = {};
bool bfs(int src)
{
    visited[src] = 1;

    for (int adjNode : adj_list[src])
    {
        if (visited[adjNode] == 0)
        {
            if (color[src] == 1)
            {
                color[adjNode] = 2;
            }

            else if (color[src] == 2)
            {
                color[adjNode] = 1;
            }

            bool is_colorAble = bfs(adjNode);
            if (!is_colorAble)
            {
                return false;
            }
        }
        else
        {
            if (color[src] == color[adjNode])
            {
                return false;
            }
        }
    }
    return true;
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
        adj_list[v].push_back(u);
    }
    bool isColorAble = true;
    for (int i = 1; i <= n; i++)
    {
        if (visited[i] == 0)
        {
            color[i] = 1;
            isColorAble = bfs(i);
            if (!isColorAble)
                break;
        }
    }
    if (isColorAble)
    {
        for (int i = 1; i <= n; i++)
        {
            cout << color[i] << " ";
        }
        cout << endl;
    }
    else
    {
        cout << "IMPOSSIBLE" << endl;
    }
}

/*
step1 : intial all node uncolored
step2 : choose any uncolor node and assign a number 1 or 2;
step3 : for each uncolor node assign oppsite color of their neighbor
step 4 : repeat 2 3 until all node get color
Example

Input:
5 3
1 2
1 3
4 5

Output:
1 2 2 1 2

Input:
5 4
1 2
1 3
2 3
4 5

Output:
IMPOSIBLE
*/