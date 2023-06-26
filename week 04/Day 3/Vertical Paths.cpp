#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define all(x) (x).begin(), (x).end()
#define gcd(a,b)  __gcd(a,b)
#define lcm(a,b) (a*b)/__gcd(a,b)
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
const int N = 2e5 + 10;
const int INF = 1e9;

vector<int>adj_list[N];
//int adj_Mtx[N][N];
bool visited[N], leaf[N];
int parent[N];
int nodes, edges;


int dx[4] = {1 , -1, 0, 0};
int dy[4] = {0 , 0, 1, -1};
char dir[4] = {'D','U','R','L'};
int destx = -1,desty = -1;

void dfs(ll node)
{
    visited[node] = true;
    bool ok = true;

    for(ll adj_node : adj_list[node]) {
        if(!visited[adj_node]) {
            parent[adj_node] = node;
            dfs(adj_node);
            ok = false;
        }
    }

    if(ok) {
        leaf[node] = true;
    }

}

int main()
{
    optimize();
    ll t; cin >> t;
    while(t--) {
        ll n; cin >> n;

        for(ll i = 1; i <= n; i++){
            adj_list[i].clear();
            parent[i] = 0;
            leaf[i] = false;
            visited[i] = false;
        }
        ll root;

        for(ll i = 1; i <= n; i++) {
            int p; cin >> p;
            if(i == p) {
                root = i; continue;
            }
            adj_list[i].push_back(p);
            adj_list[p].push_back(i);
        }
        parent[root] = -1;
        dfs(root);
        ll cnt = 0;

        for(int i = 1; i <= n; i++) {
            if(leaf[i]) {
                cnt++;
            }
        }

        cout << cnt << '\n';
        unordered_map<ll, ll> ump;

        for(ll i = 1; i <= n; i++) {
            if(leaf[i]) {
                vector<ll>path;
                int selected_node = i;
                int src_node = i;

                while(true) {
                    if(selected_node == -1 || ump[selected_node] == 1) {
                        ump[selected_node] = 1;
                        break;
                    }
                    path.push_back(selected_node);
                    ump[selected_node] = 1;
                    selected_node = parent[selected_node];
                }

                reverse(path.begin(), path.end());
                cout << path.size() << '\n';

                for(int node : path) {
                    if(node > 0) cout << node << ' ';
                }

                cout << '\n';
            }
        }
        cout << '\n';
    }

}


