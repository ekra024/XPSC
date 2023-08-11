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

ll binary(vector<ll>&a, ll n, ll m, ll mid)
{
    ll sum = 0;
    for(ll i = 0; i < n; i++) {
        if(a[i] > mid) sum += a[i]- mid;
    }
    if(sum >= m) return 1;
    else return 0;
}

int main()
{
    optimize();
    ll n, m; cin >> n >> m;
    vector<ll> a(n);
    ll mx = 0;
    for(ll i = 0; i < n; i++) {
        cin >> a[i];
        mx = max(mx, a[i]);
    }

    ll l = 0, r = mx, ans = 0;
    while(l <= r) {
        ll mid = (l+r)/2;
        if(binary(a, n, m, mid)) {
            ans = mid;
            l = mid + 1;
        }
        else r = mid -1;
    }

    cout << ans << '\n';
}

