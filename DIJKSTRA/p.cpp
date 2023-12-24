#include "bits/stdc++.h"
using namespace std;
const int inf = 1e5;

int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> dis(n + 1, inf);
    vector<vector<pair<int, int>>> graph(n + 1);
    for (int i = 0; i < m; i++)
    {
        int u, v, w;
        cin >> u >> v >> w;
        graph[u].push_back({v, w});
        graph[v].push_back({v, w});
    }
    int so;cin>>so;
    dis[so]=0;
    set<pair<int,int>> s;
    s.insert({0,so});

    while(!s.empty()){
        auto x=*s.begin();
        s.erase(x);
        for(auto it:graph[x.second]){
            int updatedistance=dis[x.second]+it.second;
            if(dis[it.first]>updatedistance){
                s.erase({dis[it.first],it.first});
                dis[it.first]=updatedistance;
                s.insert({dis[it.first],it.first});


            }
        }
    }
    for(int i=0;i<n;i++){
        if(dis[i]!=inf){
            cout<<dis[i]<<" ";
        }
    }
}