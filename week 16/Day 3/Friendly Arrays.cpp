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
        ll n, m; cin >> n >> m;
        vector<ll> a(n), b(m);
        ll cnt = 0, x = 0, y = 0;

        for(ll i = 0; i < n; i++) cin >> a[i];
        for(ll i = 0; i < m; i++) {
            cin >> b[i];
            cnt |= b[i];
        }

        for(int i = 0; i < n; i++) {
            x ^= a[i];
            y ^= a[i]|cnt;
        }
        if(x > y) swap(x, y);

        cout << x << ' '<< y <<'\n';
    }
}


