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
        ll n; cin >> n;
        vector<ll> a(n), b(n);
        for(ll i = 0; i < n; i++) cin >> a[i];
        for(ll i = 0; i < n; i++) cin >> b[i];

        ll diff = 0, k = 0, p = 0;
        bool ok = true, first = false;

        for(ll i = 0; i < n; i++) {
            if(a[i] > b[i]) {
                ok = false;
                break;
            }
            if(a[i] < b[i] && p == 0) {
                diff = b[i] - a[i];
                if(k != diff && first) {
                    ok = false; break;
                }
                k = diff;first = true;
            }
            else if(first && a[i] == b[i]) p = 1;
            if(a[i] < b[i] && p == 1) {
                ok = false;break;
            }
        }

        if(ok) cout << "YES\n";
        else cout << "NO\n";
    }
}


