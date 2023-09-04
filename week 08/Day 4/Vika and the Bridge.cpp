#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define gcd(a,b)  __gcd(a,b)
#define lcm(a,b) (a*b)/__gcd(a,b)
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
template <typename T>
using pbds = tree<T, null_type, less<T>,rb_tree_tag, tree_order_statistics_node_update>;
int mod = 1e9 + 7;
const int N=1e5;

int main()
{
    optimize();
    ll t; cin >> t;
    while(t--) {
        ll n, k; cin >> n >> k;
        vector<ll> v(n), last(k+1, -1);
        multiset<ll > dist[k+1];
        ll mx = -1, mx1 = -1, mx2 = -1, cnt = 0;

        for(ll i = 0; i < n; i++) {
            cin >> v[i];
        }

        for(ll i = 0; i < n; i++) {
            ll j = i - last[v[i]] - 1;
            last[v[i]] = i;
            dist[v[i]].insert(j);
            while(dist[v[i]].size() > 2) {
                dist[v[i]].erase(dist[v[i]].begin());
            }
        }

        int ans = n;

        for(ll i = 0; i <= k; i++) {
            if(last[i] != -1) {
                ll jump = n - last[i] - 1;
                dist[i].insert(jump);
                while(dist[i].size() > 2) {
                    dist[i].erase(dist[i].begin());
                }
                vector<int> values;

                for(auto j : dist[i])
                    values.push_back(j);
                ans = min(ans, max(values[0], values[1]/2));
            }
        }

        cout << ans << '\n';
    }
}


