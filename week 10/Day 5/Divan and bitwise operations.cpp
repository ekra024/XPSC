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
        ll n, m; cin >> n >> m;
        ll allOr = 0;
        for(ll i = 0; i < m; i++) {
            ll l, r, a; cin >> l >> r >> a;
            allOr |= a;
        }

        ll base = 2, power = n-1, res=1;
        base %= mod;

        if(base != 0) {
            while(power) {
                if(power & 1)
                    res = (res*base)%mod;
                power = power >> 1;
                base = (base*base)%mod;
            }
        }

        ll ans = (allOr * res)%mod;

        cout << ans << '\n';
    }
}


