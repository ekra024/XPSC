#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 10;
bool visited[N];
vector<int> adj_list[N];
int color[N];

bool bfs(int src)
{
    queue<int> q;
    q.push(src);
    visited[src] = true;
    color[src] = 1;
    while(!q.empty()) {
        int parent = q.front();
        q.pop();

        for(int child : adj_list[parent]) {
            if(!visited[child]) {
                visited[child] = true;
                q.push(child);
                if(color[parent] == 1) {
                    color[child] = 2;
                }
                else color[child] = 1;
            }
            else {
                if(color[parent] == color[child]) {

                    //cout << child <<" "<< parent <<"\n";
                    return false;
                }
            }
            // cout << color[child] <<" "<<color[parent]<<"\n";
        }

    }
    return true;
}

int main()
{
    int n, m;
    cin >> n >> m;
    for(int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
        adj_list[u].push_back(v);
        adj_list[v].push_back(u);
    }

    bool ok = true;

    for(int i = 1; i <= n; i++) {
        if(!visited[i]) {
            if(bfs(i) == false) {
                ok = false;
                break;

            }
            //cout << ok <<"\n";
        }
    }


    if(ok) {
        for(int i = 1; i <= n; i++) {
            cout << color[i] <<" ";
        }
        cout << "\n";
    }
    else cout << "IMPOSSIBLE\n";
}
