#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define gcd(a,b)  __gcd(a,b)
#define lcm(a,b) (a*b)/__gcd(a,b)
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
template <typename T> using pbds = tree<T, null_type, less<T>,rb_tree_tag, tree_order_statistics_node_update>;
int mod = 1e9 + 7;
const int N=1e5 + 5;

vector<int>adjList[N];
int visited[N];
int parent[N];


bool detect_cycle(int src)
{
    visited[src] = 1;

    for(int adj_node : adjList[src]) {
        if(adj_node == parent[src]) {
            continue;
        }
        if(visited[adj_node] == 0) {
            parent[adj_node] = src;

            bool ok = detect_cycle(adj_node);
            if(ok) {
                return true;
            }
        }

        if(visited[adj_node] == 1) {

            return true;
        }
    }

    visited[src] = 2;
    return false;
}

int main()
{
    optimize();
    ll t; cin >> t;
    while(t--) {
        int node, edge;
        cin >> node >> edge;

        while(edge--) {
            int u, v;
            cin >> u >> v;
            adjList[u].push_back(v);
            adjList[v].push_back(u);
        }

        bool cycle = false;

        for(int i = 1; i <= node; i++) {
            if (visited[i] == 0) {
                bool ok = detect_cycle(i);
                if(ok) {
                    cycle = true;
                    break;
                }
            }
        }
    }
}
