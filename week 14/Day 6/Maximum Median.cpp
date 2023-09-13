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

    for(ll i = 0; i < n; i++) cin >> a[i];
    sort(a.begin(), a.end());

    ll ans = 0;
    ll l = 0, r = 1e10;

    while(l <= r) {
        ll mid = (r - l)/2 + l;

        ll diff = 0;
        for(ll i = n/2; i < n; i++) {
            diff += (a[i] < mid ? (mid - a[i]) : 0);
        }

        if(diff <= k) {
            ans = mid;
            l = mid + 1;
        }
        else r = mid - 1;
    }

    cout << ans << '\n';
}


