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

bool bs(ll x , vector<ll>&a, vector<ll>&b, ll n, ll k)
{
    ll c = 0, l = 0, r = 0;

    while(l < n && r < n) {
        if(a[l] + b[r] >= x) {
            r++;
        }
        else {
            l++; c += (n - r);
        }
    }

    return c < k;
}

int main()
{
    optimize();
    ll n, k; cin >> n >> k;
    vector<ll> a(n), b(n);

    for(ll i = 0; i < n; i++) cin >> a[i];
    for(ll i = 0; i < n; i++) cin >> b[i];

    sort(a.begin(), a.end());
    sort(b.rbegin(), b.rend());

    ll l = 1, r = 2e9 + 10, ans;

    for(ll i = 0; i < 80; i++) {
        ll mid = (r - l)/2 + l;

        if(bs(mid, a, b, n, k)) {
            l = mid;
            ans = mid;
        }
        else {
            r = mid;
        }
    }

    cout << ans << '\n';
}

