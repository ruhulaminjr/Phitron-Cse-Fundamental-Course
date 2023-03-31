#include <bits/stdc++.h>

using namespace std;
const int N = 1e5;
vector<int> adj_list[N];
vector<bool> visited(N, false);
struct Circle
{
    int x;
    int y;
    int r;
};
bool overlap(Circle c1, Circle c2)
{
    int dist = pow(c1.x - c2.x, 2) + pow(c1.y - c2.y, 2);
    int rSum = pow(c1.r + c2.r, 2);
    return dist <= rSum;
}
void bfs(int i)
{
    queue<int> q;
    q.push(i);
    visited[i] = true;

    // BFS
    while (!q.empty())
    {
        int u = q.front();
        q.pop();
        for (int v : adj_list[u])
        {
            if (!visited[v])
            {
                visited[v] = true;
                q.push(v);
            }
        }
    }
}
int main(void)
{
    int n;
    cin >> n;
    vector<Circle> circles(n);
    for (int i = 0; i < n; i++)
    {
        cin >> circles[i].x >> circles[i].y >> circles[i].r;
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (overlap(circles[i], circles[j]))
            {
                adj_list[i].push_back(j);
                adj_list[j].push_back(i);
            }
        }
    }
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (!visited[i])
        {
            bfs(i);
            count++;
        }
    }
    cout << count << endl;
}