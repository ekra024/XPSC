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
vector<ll> adjList[N];
bool visited[N];
bool bipa[N];
ll cnt = 0, c=0;

void dfs(ll node)
{
    visited[node] = true;
    if(bipa[node]) cnt++;
    else c++;

    for(auto child : adjList[node]) {
        if(!visited[child]) {
            bipa[child] = bipa[node] ^ 1;
            dfs(child);
        }
    }
}

int main()
{
    optimize();
    ll t = 1;// cin >> t;
    while(t--) {
        ll n; cin >> n;
        for(ll i = 0; i < n-1; i++) {
            ll a, b; cin >> a >> b;
            adjList[a].push_back(b);
            adjList[b].push_back(a);
        }

        dfs(1);

        ll sz = (cnt*c) - n;

        cout << sz+1 << '\n';
    }
}


