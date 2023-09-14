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

bool bs(ll n, ll k, vector<ll>&v, ll m)
{
    ll sum = 0;
    for(ll i = 0; i < v.size(); i++) {
        sum += min(m, v[i]);
    }
    return sum >= m*k;
}

int main()
{
    optimize();
    ll k, n; cin >> k >> n;
    vector<ll> v(n);
    for(ll i = 0; i < n; i++) cin >> v[i];

    ll l = 0, r = 1e17, ans;

    while(l+1 < r) {
        ll mid = (r - l)/2 + l;
        if(bs(n, k, v, mid)) {
            l = mid;
        }
        else {
            r = mid;
        }
    }

    cout << l << '\n';
}

