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
        ll n, k; cin >> n >> k;
        vector<ll> a(n);
        for(ll i = 0; i < n; i++) cin >> a[i];

        sort(a.begin(), a.end());
        ll l = 1, r = 1e15, ans;

        while(l <= r) {
            ll mid = (r - l)/2 + l;
            ll cnt = 0;
            bool ok = true;

            for(ll i = 0; i < n; i++) {
                cnt = cnt + (mid - a[i]);
                if(cnt > k) {
                    ok = false; break;
                }
            }

            if(ok) {
                ans = mid;
                l = mid + 1;
            }
            else r = mid - 1;
        }

        cout << ans << '\n';
    }
}
