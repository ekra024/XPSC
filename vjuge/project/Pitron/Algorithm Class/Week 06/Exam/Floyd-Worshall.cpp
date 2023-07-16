#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define all(x) (x).begin(), (x).end()
#define gcd(a,b)  __gcd(a,b)
#define lcm(a,b) (a*b)/__gcd(a,b)
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
const int N = 1e3 + 10;
const int INF = 1e9;

vector<int>adj_list[N];
pair<int, int> adj_Mtx[N][N];
bool visited[N];
int parent[N];
int n, m;
int d[N][N];

int dx[4] = {1 , -1, 0, 0};
int dy[4] = {0 , 0, 1, -1};
char dir[4] = {'D','U','R','L'};
int destx = -1,desty = -1;


void floyd_Worshall()
{
    for(int i = 1; i <= n; i++) {
        d[i][i] = 0;
    }

    for(int k = 1; k <= n; k++) {
        for(int u = 1; u <= n; u++) {
            for(int v = 1; v <= n; v++) {
                d[u][v] = min(d[u][v], d[u][k] + d[k][v]);
            }
        }
    }
}

int main()
{
    optimize();
    int q;
    cin >> n >> m >> q;

    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) {
            d[i][j] = INF;
        }
    }

    for(int i = 1; i <= m; i++) {
        int u, v, w; cin >> u >> v >> w;
        d[u][v] = min(d[u][v], w);
        d[v][u] = min(d[v][u], w);

    }


    floyd_Worshall();

    while(q--) {
        int a, b; cin >> a >> b;

        if(d[a][b] != INF)
        cout << d[a][b] << '\n';
        else cout << -1 << '\n';
    }

}
