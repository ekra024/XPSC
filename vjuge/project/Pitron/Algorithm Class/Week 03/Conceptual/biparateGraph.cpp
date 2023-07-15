#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define all(x) (x).begin(), (x).end()
#define gcd(a,b)  __gcd(a,b)
#define lcm(a,b) (a*b)/__gcd(a,b)
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

const int N=1e5 +10;
int hsh[N];
vector<int> adj_list[N];
vector<bool> visited(N);
vector<int> color(N);

bool dfs(int node)
{
    visited[node] = true;
    for(int child : adj_list[node]) {
        if(!visited[child]) {
            if(color[node] == 1)
                color[child] = 2;
            else color[child] = 1;
            bool bicolor_able = dfs(child);
            if(!bicolor_able) {
                cout << "false ";
                return false;
            }
        }
        else {
            if(color[node] == color[child])
                return false;
        }
    }
    return true;
}

int main()
{
    optimize();
    int nodes, edges;
    cin >> nodes >> edges;
    for(int i = 1; i <= edges; i++) {
        int u, v;
        cin >> u >> v;
        adj_list[u].push_back(v);
        adj_list[v].push_back(u);
    }

//    for(int i = 1; i <= nodes; i++) {
//        cout << i << "->";
//        for(int child : adj_list[i])
//            cout << child << " ";
//        cout << "\n";
//    }

    bool ok = true;

    for(int i = 1; i <= nodes; i++) {
        if(!visited[i]) {
            color[i] = 1;
            bool yes = dfs(i);
            if(!yes) {
                ok = false;
                break;
            }
        }
    }
    if(ok) {
        for(int i = 1; i <= nodes; i++) {
            cout << color[i] << " ";
        }
        cout << "\n";
    }
    else cout << "IMPOSSIBLE\n";
}
