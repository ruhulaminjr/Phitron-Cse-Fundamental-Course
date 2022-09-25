#include <bits/stdc++.h>
using namespace std;
typedef pair<int, int> Edgeweight;
class Graph
{
    int V;
    list<Edgeweight> *adjacent;

public:
    Graph(int v)
    {
        this->V = v;
        adjacent = new list<Edgeweight>[V];
    }
    void addEdge(int u, int v, int e)
    {
        adjacent[u].push_back(make_pair(v, e));
        adjacent[v].push_back(make_pair(u, e));
    }
    void printNeighbor(int chk)
    {
        cout << chk << "-> ";
        for (auto i = adjacent[chk].begin(); i != adjacent[chk].end(); i++)
        {
            cout << "(" << i->first << "," << i->second << ") "
                 << "|";
        }
    }
    void bfs(int source)
    {
        vector<bool> visited(V, false);
        queue<int> q;
        q.push(source);
        visited[source] = true;
        while (!q.empty())
        {
            int el = q.front();
            cout << el << " ";
            q.pop();
            for (auto i = adjacent[el].begin(); i != adjacent[el].end(); i++)
            {
                int u = i->first;
                if (visited[u] != true)
                {
                    visited[u] = true;
                    q.push(u);
                }
            }
        }
        cout << endl;
    }
    void dfs(int source){
        static vector<bool> visited(V,false);
        visited[source] = true;
        cout<<source<<" ";
        for(auto i = adjacent[source].begin(); i != adjacent[source].end(); i++){
            int el = i->first;
            if(visited[el] != true){
                dfs(el);
            }
        }

    }
};
int main(void)
{
    int v, e;
    cin >> v >> e;
    Graph g(v);
    for (int i = 0; i < e; i++)
    {
        int val, edge, adj;
        cin >> val >> adj >> edge;
        g.addEdge(val, adj, edge);
    }
    for (int i = 0; i < v; i++)
    {
        g.printNeighbor(i);
        cout << endl;
    }
    g.bfs(0);
    g.dfs(0);
    cout<<endl;
}
/*
6 6
0 1 3
0 4 6
1 5 2
3 4 5
4 2 3
5 3 4
*/