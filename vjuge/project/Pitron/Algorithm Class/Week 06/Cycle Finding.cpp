#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll N = 1e5 + 10;
const ll INF = 1e18;

vector<pair<ll, ll> > adj_list[N];
ll d[N];
int parent[N];

int main()
{
    int n, m;
    cin >> n >> m;

    for(int i = 1; i <= n; i++) {
        d[i] = INF;
    }

    for(int i = 0; i < m; i++) {
        ll u, v, w;
        cin >> u >> v >> w;
        adj_list[u].push_back({v, w});
    }

    bool negative_cycle = false;
    ll last_updated_node = -1;

    for(int i = 1; i <= n; i++) {
        for(int node = 1; node <= n; node++) {
            for(pair<int, int> adj_node : adj_list[node]) {
                ll u = node;
                ll v = adj_node.first;
                ll w = adj_node.second;

                if(d[u] + w < d[v]) {
                    d[v] = d[u] + w;
                    parent[v] = u;
                    if( i == n) {
                        negative_cycle = true;
                        last_updated_node = v;
                    }
                }
            }
        }
    }

    if(negative_cycle) {
        cout << "YES\n";

        int selected_node = last_updated_node;
        for(int i = 1; i <= n-1; i++) {
            selected_node = parent[selected_node];
        }

        int first_node = selected_node;
        vector<ll> cycle;
        cycle.push_back(selected_node);

        while(true) {
            selected_node = parent[selected_node];
            cycle.push_back(selected_node);
            if(selected_node == first_node) {
                break;
            }
        }

        reverse(cycle.begin(), cycle.end());

        for(auto node : cycle) {
            cout << node << " ";
        }
        cout << "\n";


    }
    else {
        cout << "NO\n";
    }
}
