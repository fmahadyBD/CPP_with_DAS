#include "bits/stdc++.h"
using namespace std;
const int inf=1e4;
// dijkstra
int main(){
    int n,m;cin>>n>>m;
    vector<vector<pair<int,int>>>graph(n+1);
    vector<int>dist(n+1,inf);
    for(int i=0;i<m;i++){
        int u,v,w;cin>>u>>v>>w;
        graph[u].push_back({v,w});
        graph[v].push_back({u,w});
    }
    int so;cin>>so;
    set<pair<int,int>> s;
    s.insert({0,so});
    while(!s.empty()){
        auto x=*s.begin();
        s.erase(x);
        for(auto it:graph[x.second]){
            int updatedistance=dist[x.second]+it.second;
            if(dist[it.first]>updatedistance){
                s.erase({dist[it.first],it.first});
                dist[it.first]=updatedistance;
                s.insert(dist[it.first],it.first);
            }
        }
    }

}