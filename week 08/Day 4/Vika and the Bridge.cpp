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
        vector<ll> c(n), last(k+1, -1);
        vector<multiset<ll > > dist(k+1);

        map<ll,ll> mp;
        ll mx = -1, mx1 = -1, mx2 = -1, cnt = 0;

        for(ll i = 0; i < n; i++) {
            cin >> c[i];
        }

        for(ll i = 0; i < n; i++) {
            ll j = i - last[v[i]] - 1;
            last[v[i]] = i;
            dist[v[i]].insert(j);
            while(dist[v[i]].size() > 2) {
                dist[v[i]].erase(dist[v[i].begin());
            }
        }

        int ans = n;

        for(auto it : mp) {
            if(it.second > mx) {
                mx = it.first;
            }
        }

        for(ll i = 0; i < k+1; i++) {
            if(last[i] != -1) {
                ll j = n - last[i] - 1;
            }
        }

        if(cnt) {
            mx2 = mx1;
            mx1 = cnt;
            cnt = 0;
        }
        //cout << mx1 << ' '<< mx2 << '\n';

        if(mx1 == -1 && mx2 == -1) cout << 0 << '\n';
        else if(mx2 == -1) cout << mx1/2 << '\n';
        else cout << min(mx1/2 , mx2) << '\n';
    }
}


