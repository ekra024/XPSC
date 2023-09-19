#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define gcd(a,b)  __gcd(a,b)
#define lcm(a,b) a/(b/__gcd(a,b))
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
template <typename T> using pbds = tree<T, null_type, less<T>,rb_tree_tag, tree_order_statistics_node_update>;
int mod = 1e9 + 7;
const int N=1e5 + 123;

int main()
{
    optimize();
    ll t; cin >> t;
    while(t--) {
        ll n, mx = INT_MIN, mn = INT_MAX; cin >> n;
        vector<ll> a(n);

        for(ll i = 0; i < n; i++) cin >> a[i];
        for(ll i = 0; i < n; i++) {
            if(i > 0 && a[i] == -1 && a[i-1] != -1) {
                mn = min(mn, a[i-1]);
                mx = max(mx, a[i-1]);
            }
            if(i < n-1 && a[i] == -1 && a[i+1] != -1) {
                mn = min(mn, a[i+1]);
                mx = max(mx, a[i+1]);
            }
        }

        ll missing = (mx + mn)/2;

        for(ll i = 0; i < n; i++) {
            if(a[i] == -1) a[i] = missing;
        }

        ll dif = 0;

        for(ll i = 0; i < n-1; i++) {
            ll r = abs(a[i] - a[i+1]);
            dif = max(dif, r);
        }

        cout << dif << ' '<< missing << '\n';
    }
}


