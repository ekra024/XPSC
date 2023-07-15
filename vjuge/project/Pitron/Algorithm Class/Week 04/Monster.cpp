#include<bits/stdc++.h>
using namespace std;

const int N = 1e5 + 10;

int n,m;
vector<int> adj_list[N];
bool visited[N];

bool dfs(int node)
{
    visited[node] = true;
    if(node == n) {
        return true;
    }

    for(int adj_node : adj_list[node]) {
        if(!visited[adj_node]) {
            if(dfs(adj_node)) {
                return true;
            }
        }
    }

    return false;
}

int main()
{
    cin >> n >> m;
    for(int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
        adj_list[u].push_back(v);
    }

    bool ok = dfs(1);

    if(ok) cout << "YES\n";
    else cout << "NO\n";
}
