#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define all(x) (x).begin(), (x).end()
#define gcd(a,b)  __gcd(a,b)
#define lcm(a,b) (a*b)/__gcd(a,b)
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
const int N = 1e5 + 10;
const int INF = 1e9;

vector<int>adj_list[N];
//int adj_Mtx[N][N];
bool visited[N];
int parent[N];
int nodes, edges;

int dx[4] = {1 , -1, 0, 0};
int dy[4] = {0 , 0, 1, -1};
char dir[4] = {'D','U','R','L'};
int destx = -1,desty = -1;

int main()
{
    optimize();
    cin >> nodes >> edges;

    for(int i = 0; i < edges; i++) {
        int u, v; cin >> u >> v;
        adj_list[u].push_back(v);
        adj_list[v].push_back(u);
    }

}


