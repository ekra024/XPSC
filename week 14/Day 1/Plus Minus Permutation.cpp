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
        ll n, x, y; cin >> n >> x >> y;
        ll ans = 0;
        ll l = lcm(x , y);

        if(x == y) ans = 0;
        else {
            ll f = n/x - n/l;
            ll s = n/y - n/l;

            ans = ((n+n - f + 1)*f/2) - ((s+1)*s/2);
        }

        cout << ans << '\n';
    }
}
