
#include <bits/stdc++.h>
using namespace std;

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n, e;
    cin >> n >> e;
    vector<bool> visited(n + 1, false);
    vector<int> v[n + 1];
    for (int i = 0; i < e; i++)
    {
        int a, b;
        cin >> a >> b;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    int l;
    cin >> l;
    queue<int> q;
    q.push(0);
    int chk = true;
    int prev = 0;
    while (!q.empty())
    {
        int el = q.front();
        q.pop();
        if (visited[el] == true)
            continue;
        if (el == l)
        {
            chk = false;
            // cout<<"Inside "<<endl;
            for(int i = 0;i<v[prev].size();i++){
                cout<<v[prev][i]<<" ";
            }
            cout<<endl;
            break;
        }
        
        prev = el;
        for (int i = 0; i < v[el].size(); i++)
        {
            int adj = v[el][i];
            if (visited[adj] == false)
            {
                q.push(adj);
            }
        }
        visited[el] = true;
    }
    if (chk){
        cout<<"0"<<endl;
    }
    return 0;
}
