#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define all(x) (x).begin(), (x).end()
#define gcd(a,b)  __gcd(a,b)
#define lcm(a,b) (a*b)/__gcd(a,b)
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
const int N = 1e5 + 10;
const int INF = 1e9;

vector<pair<int, int> >adj_list[N];
//int adj_Mtx[N][N];
bool visited[N];
int parent[N];
int nodes, edges;
int d[N];

int dx[4] = {1 , -1, 0, 0};
int dy[4] = {0 , 0, 1, -1};
char dir[4] = {'D','U','R','L'};
int dest = -1,desty = -1;


bool Bellman_Ford(int src)
{
    for(int i = 1; i <= nodes; i++) {
        d[i] = INF;
    }

    d[src] = 0;
    parent[src] = -1;

    bool Neg_Cycle = false;

    for(int i = 1; i <= nodes; i++) {
        for(int node = 1; node <= nodes; node++) {
            for(auto adj_node : adj_list[node]) {
                int u = node;
                int v = adj_node.first;
                int w = adj_node.second;

                if(d[u] + w < d[v]) {
                    d[v] = d[u] + w;
                    parent[v] = u;
                    if(i == nodes) {
                        Neg_Cycle = true;
                        dest = v;
                    }
                }
            }
        }
    }

    return Neg_Cycle;
}


int main()
{
    optimize();
    cin >> nodes >> edges;

    for(int i = 0; i < edges; i++) {
        int u, v, w; cin >> u >> v >> w;
        adj_list[u].push_back({v, w});
    }

    int src = 1;

    bool Neg_Cycle = Bellman_Ford(src);

    if(Neg_Cycle) {
        cout << "YES\n";
        int selected_node = dest;

        for(int i = 1; i <= nodes-1; i++) {
            selected_node = parent[selected_node];
        }

        vector<int> cycle;
        int ed = selected_node;
        cycle.push_back(selected_node);

        while(parent[selected_node] != ed) {
            selected_node = parent[selected_node];
            cycle.push_back(selected_node);
        }
        cycle.push_back(ed);
        reverse(cycle.begin(), cycle.end());

        for(auto cy : cycle) {
            cout << cy << ' ';
        }
        cout << '\n';
    }
    else cout << "NO\n";

}



