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
    ll total = 0;
    for(ll i = 0; i < n; i++){
        cin >> a[i];
        total += a[i];
    }
    ll l = 0, r = total + 100, ans = 0;

    while(l+1 < r) {
        ll mid = (r + l)/2;
        ll cnt = 1, h = 0;
        ll sum = 0;
        bool ok = true;

        while(h < n) {
            if(a[h] > mid) {
                ok = false; break;
            }
            if(a[h] + sum > mid) {
                cnt++;
                sum = a[h];
            }
            else sum += a[h];
            h++;
        }

        if(ok && cnt <= k) {
            r = mid;
        }
        else l = mid;
    }
    cout << r << '\n';
}
