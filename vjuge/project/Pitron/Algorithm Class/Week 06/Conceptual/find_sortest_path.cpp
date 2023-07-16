#include<bits/stdc++.h>
using namespace std;
const int N = 1000;

vector<int> adj_list[N];
vector<int> parent;
vector<bool> visited;


vector<int> find_path(int d)
{
    vector<int>path;
    int x = d;

    while(x != -1) {
        path.push_back(x);
        x = parent[x];
    }

    return path;
}

vector<int> bfs(int src, int dest)
{
    queue<int> q;
    q.push(src);
    visited[src] = true;
    vector<int>path;

    while(!q.empty()) {
        int p = q.front();
        q.pop();
        if(p == dest)  {
            path = find_path(dest);
            return path;
        }

        for(auto child : adj_list[p]) {
            if(!visited[child]) {
                visited[child] = true;
                q.push(child);
                parent[child] = p;
            }
        }
    }

    return path;
}

int main()
{
    int n, e;
    cin >> n >> e;
    visited.resize(n, false);
    parent.resize(n, -1);

    while(e--) {
        int a, b;
        cin >> a >> b;
        adj_list[a].push_back(b);
        adj_list[b].push_back(a);
    }

    int src,dest;
    cin >> src >> dest;

    vector<int>path = bfs(src, dest);
    reverse(path.begin(), path.end());

    for(auto x : path) {
        cout << x << ' ';
    }
    cout << '\n';
}
