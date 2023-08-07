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
        ll n, m, k; cin >> n >> m >> k;
        vector<ll> a(m);
        for(ll i = 0; i< m; i++) cin >> a[i];

        sort(a.rbegin(), a.rend());
        ll sum = 0;
        ll rem = n%k;
        ll div = n/k;
        bool ok = true;

        for(ll i = 0; i< m; i++) {
            sum += a[i];
            ll mn = min(i+1, rem);
            ll res = div*(i+1) + mn;
            if(sum > res) {
                ok = false;
                break;
            }
        }

        if(ok) cout << "YES\n";
        else cout << "NO\n";
    }
}


