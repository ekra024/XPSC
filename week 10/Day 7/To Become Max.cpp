
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
const int N=1005;
ll n, k;
ll a[N], ar[N];

bool ok(ll mid)
{
    ll ans = 1e9;
    for(ll i = 0; i < n-1; i++) {
        ll midi = mid;
        ll op = 0;

        for(ll j = i; j < n; j++) {
            if(ar[j] >= midi && a[j] < midi) {
                op += abs(a[j] - midi);
                midi--;
            }
            else if(ar[j] < midi) {
                op = 1e9;
                break;
            }
            else if(a[j] >= midi) break;
        }
        ans = min(ans, op);
    }

    return ans <= k;
}

int main()
{
    optimize();
    ll t; cin >> t;
    while(t--) {
        cin >> n >> k;
        for(ll i = 0; i < n; i++) {
            cin >> a[i];
            ar[i] = a[i];
        }

        ll mx1 = *max_element(a, a+n);

        for(ll i = n-2; i >= 0; i--) {
            if(ar[i] <= ar[i+1]) ar[i] = ar[i+1] + 1;
        }


        ll mx2 = *max_element(ar, ar+n);
        ll l = mx1, h = mx2, ans = mx1;

        while(l <= h) {
            ll mid = (h-l)/2 + l;
            if(ok(mid)) {
                l = mid + 1;
                ans = max(ans, mid);
            }
            else h = mid - 1;
        }

        cout << ans << '\n';
    }
}
