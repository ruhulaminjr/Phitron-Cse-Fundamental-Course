#include <bits/stdc++.h>
using namespace std;

const int N = 1e7;

vector<int> graph[N];
int in_degrees[N];
int longest_path[N];

void topological_sort(int n)
{
    queue<int> q;
    for (int i = 1; i <= n; i++)
    {
        if (in_degrees[i] == 0)
        {
            q.push(i);
            longest_path[i] = 0; 
        }
    }

    while (!q.empty())
    {
        int node = q.front();
        q.pop();

        for (int neighbor : graph[node])
        {
            in_degrees[neighbor]--;
            longest_path[neighbor] = max(longest_path[neighbor], longest_path[node] + 1);
            if (in_degrees[neighbor] == 0)
            {
                q.push(neighbor);
            }
        }
    }
}

int main()
{
    int n, m;
    cin >> n >> m;

    memset(in_degrees, 0, sizeof(in_degrees));
    memset(longest_path, -1, sizeof(longest_path));

    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        graph[u].push_back(v);
        in_degrees[v]++;
    }

    topological_sort(n);

    int ans = 0;
    for (int i = 1; i <= n; i++)
    {
        ans = max(ans, longest_path[i]);
    }
    cout << ans << endl;

    return 0;
}

/*
            6
         /     \
        2       5
      /   \    /  \
     9     8  12   2
   /   \
  2    12

*/

/*
     {6 , 4 , 10 , 2 , 0}
      0 , 5 , 10 , 2 , 0
      0 , 0 , 12 ,14 , 0
      0 , 0 ,  0 , 7 , 0
    { 0 , 0 ,  0 , 0 , 0}

*/