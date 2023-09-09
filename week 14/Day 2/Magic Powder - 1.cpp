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
vector<ll> a, b;

bool bs(ll mid, ll n, ll k)
{
    for(ll i = 0; i < n; i++) {
        ll r = a[i]*mid;
        if(r-b[i] > k) {
            return false;
        }
        else if(b[i] < r){
            k = k - (r - b[i]);
        }
    }
    return true;
}

int main()
{
    optimize();
    ll n, k; cin >> n >> k;
    for(ll i = 0; i < n; i++) {
        ll x; cin >> x;
        a.push_back(x);
    }
    for(ll i = 0; i < n; i++) {
        ll x; cin >> x;
        b.push_back(x);
    }

    ll l = 0, r = 2e9, ans = 0;

    while(l <= r) {
        ll mid = (r - l)/2 + l;

        bool ok = bs(mid, n, k);

        if(ok) {
            //cout << mid << ' ';
            ans = mid;
            l = mid + 1;
        }
        else {
            r = mid - 1;
        }
    }

    cout << ans << '\n';
}


