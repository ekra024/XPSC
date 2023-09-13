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
    ll n, k; cin >> n >> k;
    vector<ll> a(n);
    ll mx = INT_MIN;
    for(ll i = 0; i < n; i++) {
        cin >> a[i];
        mx = max(mx, a[i]);
    }

    ll l = mx, r = 1e18, ans = -1;

    while(l <= r) {
        ll mid = (r-l)/2 + l;
        ll sum = 0, cnt = 1;
        for(ll i = 0; i < n; i++) {
            sum += a[i];
            if(sum > mid) {
                cnt++;
                sum = a[i];
            }
        }

        if(cnt <= k) {
            ans = mid;
            r = mid - 1;
        }
        else l = mid + 1;
    }

    cout << ans << '\n';
}


