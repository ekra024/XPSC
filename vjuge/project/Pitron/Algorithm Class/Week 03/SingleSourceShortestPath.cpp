#include<bits/stdc++.h>
using namespace std;
const int N = 1e5;

int visited[N];
int level[N];

vector<int> adj_list[N];

void bfs(int src)
{
    visited[src] = 1;
    level[src] = 0;

    queue<int>q;
    q.push(src);
    while(!q.empty()){
        int head = q.front();
        q.pop();

        for(auto u : adj_list[head]){
            if(visited[u] == 0) {
                q.push(u);
                visited[u] = 1;
                level[u] = level[head] + 1;
            }
        }
    }
}

int main()
{
    int nodes,edges;
    cin >> nodes >> edges;

    for(int i=0;i<edges;i++){
        int u,v;cin>>u>>v;
        adj_list[u].push_back(v);
        adj_list[v].push_back(u);
    }

    int src = 0;
    bfs(src);

    for(int i=0;i<nodes ;i++){
        cout<<"node "<<i<<" -> level: "<<level[i]<<"\n";
    }
}
