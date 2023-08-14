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

int main()
{
    optimize();
    ll t; cin >> t;
    while(t--) {
        ll n; cin >> n;
        vector<pair<ll,ll> > a;
        vector<ll> b(n), c, d(n);

        for(ll i = 0; i < n; i++) {
            int x; cin >> x;
            c.push_back(x);
            a.push_back({x, i});
        }
        for(ll i = 0; i < n; i++) {
            cin >> b[i];
            d[i] = b[i];
        }

        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        bool ok = true;
        ll mn = INT_MAX, mx = INT_MIN;

        for(ll i = 0; i < n; i++) {
            if(a[i].first+1==b[i] || a[i].first==b[i]) {
                if(a[i].first+1 == b[i]) {
                    mn = min(mn, a[i].second);
                    mx = max(mx, a[i].second);

                }
            }
            else {
                ok = false;break;
            }
        }

        if(ok) cout << "YES\n";
        else cout << "NO\n";
    }
}


