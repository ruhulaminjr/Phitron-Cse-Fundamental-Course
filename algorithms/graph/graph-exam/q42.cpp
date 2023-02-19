#include <iostream>
#include <queue>
#include <vector>
#include <cstring>
using namespace std;

const int MAXN = 100005;
vector<int> adj[MAXN];
bool visited[MAXN];
int dist[MAXN];
int n, m, k;

void bfs(vector<int>& sources) {
    queue<int> q;
    memset(dist, -1, sizeof(dist)); // -1 indicates unreachable
    for (int i = 0; i < sources.size(); i++) {
        int s = sources[i];
        visited[s] = true;
        dist[s] = 0;
        q.push(s);
    }
    while (!q.empty()) {
        int v = q.front();
        q.pop();
        for (int i = 0; i < adj[v].size(); i++) {
            int u = adj[v][i];
            if (!visited[u]) {
                visited[u] = true;
                dist[u] = dist[v] + 1;
                q.push(u);
            }
        }
    }
}

int main() {
    cin >> n >> m;
    for (int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    cin >> k;
    vector<int> sources(k);
    for (int i = 0; i < k; i++) {
        cin >> sources[i];
    }
    bfs(sources);
    int max_dist = -1;
    int last_vertex = -1;
    for (int i = 1; i <= n; i++) {
        if (dist[i] > max_dist) {
            max_dist = dist[i];
            last_vertex = i;
        }
    }
    cout << max_dist << endl << last_vertex << endl;
    return 0;
}
