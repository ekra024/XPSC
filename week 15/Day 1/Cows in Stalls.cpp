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

    ll l = 0, r = a[n-1] - a[0], ans = 0;

    while(l+ 1 < r) {
        ll mid = (r - l)/2 + l;
        ll cnt = 2, h = 0;
        ll sum = 0;

        while(h < n-1) {
            ll r = abs(a[h] - a[h+1]);

            if(sum + r > mid) {
                cnt++;
                sum = abs(a[h] - a[h+1]);
            }
            else sum += r;
            h++;
        }

        if(cnt <= k) {
            r = mid;
        }
        else l = mid;
    }
    cout << l << '\n';
}
