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
const int N=1e5;
const int INF = 1e18;

int main()
{
    optimize();
    ll t; cin >> t;
    while(t--) {
        ll n, k; cin >> n >> k;
        vector<pair<ll,ll> > v(k);
        vector<ll> ans(n+1, INF);

        for(ll i = 0; i <k; i++) cin >> v[i].first;

        for(ll i = 0; i < k; i++) {
            cin >> v[i].second;
            ans[v[i].first] = v[i].second;
        }

        for(ll i = 1; i < n; i++) {
            ans[i+1] = min(ans[i+1], ans[i]+1);
        }
        for(ll i = n-1; i >= 1; i--) {
            ans[i] = min(ans[i], ans[i+1]+1);
        }

        for(ll i = 1; i <= n; i++)
            cout << ans[i] << ' ';
        cout << '\n';
    }
}
