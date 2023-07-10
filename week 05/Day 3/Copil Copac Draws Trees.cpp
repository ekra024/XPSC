#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define all(x) (x).begin(), (x).end()
#define gcd(a,b)  __gcd(a,b)
#define lcm(a,b) (a*b)/__gcd(a,b)
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
const int N = 2e5 + 10;
const int INF = 1e9;

vector<pair<int, int> >adj_list[N];
//int adj_Mtx[N][N];
bool visited[N];
int parent[N];
int nodes, edges;
vector<int>ans;

int dx[4] = {1 , -1, 0, 0};
int dy[4] = {0 , 0, 1, -1};
char dir[4] = {'D','U','R','L'};
int destx = -1,desty = -1;
ll cnt;

void dfs(ll node, ll idx, ll r)
{
    visited[node] = 1;
    cnt = max(cnt, r);

    for(auto adj_node : adj_list[node]) {
        if(!visited[adj_node.first]) {
            if(adj_node.second < idx)
                dfs(adj_node.first, adj_node.second, r+1);
            else dfs(adj_node.first, adj_node.second, r);
        }
    }
}

int main()
{
    optimize();
    ll t; cin >> t;
    while(t--) {
        ll n; cin >> n;

        for(ll i = 1; i <= n; i++) {
            adj_list[i].clear();
            visited[i] = 0;
        }

        for(ll i = 1; i < n; i++) {
            int u, v; cin >> u >> v;
            adj_list[u].push_back({v,i});
            adj_list[v].push_back({u,i});
        }

        cnt =  0;
        dfs(1, 0, 0);


        cout << cnt + 1 << '\n';
    }
}


