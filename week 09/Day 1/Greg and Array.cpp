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
const int N=1e5 + 10;

int main()
{
    optimize();
    ll t = 1;// cin >> t;
    while(t--) {
        ll n, m, k; cin >> n >> m >> k;
        vector<ll> a(n+1), l(m+1), r(m+1), d(m+1);
        map<ll,ll> mp;
        vector<ll> pre(m+1, 0), ans, diff(N);

        for(ll i = 1; i <= n; i++) cin >> a[i];
        for(ll i = 1; i <= m; i++) {
            cin >> l[i] >> r[i] >> d[i];
        }

        while(k--) {
            ll q1, q2; cin >> q1 >> q2;
            mp[q1]++;
            mp[q2+1]--;
        }

        ll val = 0;
        for(ll i = 1; i <= m; i++) {
            val += mp[i];
            pre[i] = val;
        }

        for(ll i = 1; i <= m; i++) {
            diff[l[i]] += d[i]*pre[i];
            diff[r[i]+1] -= d[i]*pre[i];
        }

        for(ll i = 1; i <= n; i++) {
            diff[i] = diff[i]+diff[i-1];
            ans.push_back(diff[i] + a[i]);
        }

        for(auto it : ans)
            cout << it << ' ';
        cout << '\n';
    }
}


