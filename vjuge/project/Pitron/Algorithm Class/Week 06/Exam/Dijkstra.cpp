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
ll d[N];

int dx[4] = {1 , -1, 0, 0};
int dy[4] = {0 , 0, 1, -1};
char dir[4] = {'D','U','R','L'};
int destx = -1,desty = -1;

void Dijkstra(int src)
{
   for(int i = 1; i <= nodes; i++) {
        d[i] = INF;
   }

   d[src] = 0;
   parent[src] = -1;

   priority_queue<pair<ll, ll> , vector<pair<ll, ll> >,
   greater<pair<ll, ll> > > pq;
   pq.push({0, src});

   while(!pq.empty()) {
        int node = pq.top().second;
        int cost = pq.top().first;
        pq.pop();

        if(visited[node]) continue;
        visited[node] = true;

        for(auto adj_node : adj_list[node]) {
            int child = adj_node.first;
            int weight = adj_node.second;

            if(d[node] + weight < d[child]) {
                d[child] = d[node] + weight;
                pq.push({d[child], child});
                parent[child] = node;
            }
        }
   }

}

int main()
{
    optimize();
    cin >> nodes >> edges;

    for(int i = 0; i < edges; i++) {
        int u, v, w; cin >> u >> v >> w;
        adj_list[u].push_back({v, w});
        adj_list[v].push_back({u, w});
    }

    int src = 1;
    Dijkstra(src);

    if(d[nodes] != INF) {
        vector<int> path;
        path.push_back(nodes);

        int select_node = parent[nodes];

        while(select_node != -1) {
            path.push_back(select_node);
            select_node = parent[select_node];
        }

        reverse(path.begin(), path.end());

        for(auto it : path) {
            cout << it << ' ';
        }
        cout << '\n';
    }
    else cout << -1 << '\n';

}

