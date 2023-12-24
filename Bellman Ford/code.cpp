#include "bits/stdc++.h"
using namespace std;
const int inf=1e5;
//bellman ford
int main(){
    int n,m;cin>>n>>m;
    vector<vector<int>>edges;
    for(int i=0;i<m;i++){
        int u,v,w;cin>>u>>v>>w;
        edges.push_back({u,v,w});

    }
    int so;cin>>so;
    vector<int>dis(n,inf);
    dis[so]=0;
    for(int i=0;i<n-1;i++){

        bool change=false;
        for(auto e:edges){
            int u=e[0];
            int v=e[1];
            int w=e[2];
            dis[v]=min(dis[v],w+dis[u]);
        }
    }
    for( auto i:dis){
        cout<<i<<" ";
    }
}