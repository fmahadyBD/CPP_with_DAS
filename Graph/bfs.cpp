#include "bits/stdc++.h"
using namespace std;

const int N=1e5+2;

bool vis[N];
// bool array
vector<int> ajd[N];
// ajacency list

int main(){
    for(int i=0;i<N;i++)
        vis[i]=0;
    
    int n,m;
    cin>>n>>m;
    // vertex and edges
    int x,y;
    for(int i=0;i<m;i++){
        // edgs between to nodes
        cin>>x>>y;
        ajd[x].push_back(y);
        ajd[y].push_back(x);

    }
    // BFS -> need Queue
    queue<int>q;
    q.push(1);
    // starting from 1. give it manually
    vis[1]=true;
    while(!q.empty()){
        int node=q.front();
        q.pop();
        cout<<node<<endl;

        // iteretor
        vector<int>:: iterator it;
        for(it=ajd[node].begin();it!=ajd[node].end();it++){
            if(!vis[*it]){
                vis[*it]=1;
                q.push(*it);
            }

        }
        
    }
    return 0;

}