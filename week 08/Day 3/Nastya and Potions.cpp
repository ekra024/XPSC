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
const int N = 2e5 + 10;
const int INF = 1e9;
vector<ll>adjList[N];
vector<ll> cost;
vector<bool> visited;

void dfs(int node)
{
    ll sum = 0;
    visited[node] = true;
    bool ok = true;
    for(auto child : adjList[node]) {
        ok = false;
        if(!visited[child]) {
            dfs(child);
        }
        sum += cost[child];
    }
    if(ok) sum = INF;
    cost[node] = min(cost[node], sum);
}

int main()
{
    optimize();
    ll t; cin >> t;
    while(t--) {
        ll n, k; cin >> n >> k;

        cost.assign(n+2, INF);
        visited.assign(n+2, false);

        for(ll i = 0; i <= n; i++) {
            adjList[i].clear();
        }

        for(ll i = 1; i <= n; i++) cin >> cost[i];

        for(ll i = 0; i < k; i++) {
            int p; cin >> p;
            cost[p] = 0;
        }

        for(ll i = 1; i <= n; i++) {
           ll q; cin >> q;
           for(ll j = 1; j <= q; j++) {
                int a; cin >> a;
                adjList[i].push_back(a);
           }
        }

        for(ll i = 1; i <= n; i++) {
            if(!visited[i]) {
                dfs(i);
            }
        }

        for(ll i = 1; i <= n; i++)
            cout << cost[i] << ' ';
        cout << '\n';
    }
}


