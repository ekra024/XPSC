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
ll mod = 1e18 + 7;
const int N=1e5 + 123;

int main()
{
    optimize();
    ll n, t; cin >> n >> t;
    vector<ll> a(n);
    for(ll i = 0; i < n; i++) cin >> a[i];
    ll ans = 0, l = 0, r = 1e18;

    while(l+1 < r) {
        ll mid = (r - l)/2 + l;

        ll cnt = 0;
        for(ll i = 0; i < n; i++) {
           ll r = (mid/a[i]);
           cnt = (cnt + r);
           if(cnt > t) break;
        }
        //cout << mid << ' '<<cnt << '\n';

        if(cnt >= t) {
            ans = mid;
            r = mid;
        }
        else l = mid;
    }

    cout << r << '\n';
}
