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
const int N = 1e5 + 10;
vector<ll> adjList[N];
bool visited[N];
int cat[N];
ll n, m, ans = 0;

void dfs(ll node, ll con_cat)
{
    visited[node] = true;
    if(con_cat > m) return;
    bool ok = true;

    for(auto child : adjList[node]) {
        if(!visited[child]) {
            ok = false;
            dfs(child, con_cat*cat[child]+cat[child]);
        }
    }
    if(ok) ans++;
}

int main()
{
    optimize();
    cin >> n >> m;
    for(ll i = 1; i <= n; i++) cin >> cat[i];
    for(ll i = 1; i <= n-1; i++) {
        ll a, b; cin >> a >> b;
        adjList[a].push_back(b);
        adjList[b].push_back(a);
    }

    dfs(1, cat[1]);

    cout << ans << '\n';
}


