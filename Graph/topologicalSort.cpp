#include "bits/stdc++.h"
using namespace std;

int32_t main()
{
    int n, m;
    cin >> n >> m;
    int ctn = 0;
    vector<vector<int>> adj(n);
    vector<int> indeg(n, 0);
    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        // u->v
        adj[u].push_back(v);
        indeg[v]++;
    }
    queue<int> q;
    for (int i = 0; i < n; i++)
    {
        if (indeg[i] == 0)
        {
            q.push(i);
        }
    }
    while (!q.empty())
    {
        ctn++;
        int n = q.front();
        q.pop();
        cout << n << " ";
        for (auto it : adj[n])
        {
            indeg[it]--;
            if (indeg[it] == 0)
            {
                q.push(it);
            }
        }
    }
}