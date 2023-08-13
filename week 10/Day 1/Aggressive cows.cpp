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
        ll n, c, mn = INT_MAX, mx = INT_MIN; cin >> n >> c;
        vector<ll> a(n);
        for(ll i = 0; i < n; i++){
            cin >> a[i];
            mn = min(a[i], mn);
            mx = max(a[i], mx);
        }
        sort(a.begin(), a.end());

        ll l = mn, r = mx, ans = -1;
        while(l <= r) {
            ll mid = (r-l)/2 + l;
            ll gap = mid - a[0], cow = 1, posi = a[0];

            for(ll i = 0; i < n; i++) {
                posi = posi + gap;
                auto it = lower_bound(a.begin(), a.end(), posi);
                if(it == a.end()) {
                    break;
                }
                cow++;
                posi = *it;
            }

            if(cow < c) {
                r = mid - 1;
            }
            else {
                ans = max(gap, ans);
                l = mid + 1;
            }
        }

        cout << ans << '\n';
    }
}


