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
const int N=1e4 + 5;

int main()
{
    optimize();
    ll t; cin >> t;
    while(t--) {
        ll n, k, a, b; cin >> n >> k >> a >> b;
        vector<pair<ll,ll> > v(n+1);

        for(ll i = 1; i <= n; i++) {
            cin >> v[i].first >> v[i].second;
        }

        ll dis = abs(v[a].first -v[b].first ) + abs(v[a].second - v[b].second);

        ll mn1 = 1e10, mn2 = 1e10;
        for(ll i = 1; i <= k; i++) {
            ll f = abs(v[i].first - v[a].first) + abs(v[i].second - v[a].second);
            ll s = abs(v[i].first - v[b].first) + abs(v[i].second - v[b].second);

            mn1 = min(mn1, f);
            mn2 = min(mn2, s);
        }

        cout << min(dis, (mn1+mn2)) << '\n';
    }
}

