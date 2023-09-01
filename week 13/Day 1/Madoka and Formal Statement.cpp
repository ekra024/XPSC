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

int main()
{
    optimize();
    ll t; cin >> t;
    while(t--) {
        ll n; cin >> n;
        vector<ll> a(n+1), b(n+1);
        bool ok = true;

        for(ll i = 0; i < n; i++) cin >> a[i];
        for(ll i = 0; i < n; i++) cin >> b[i];

        a[n] = a[0];
        b[n] = b[0];

        for(ll i = 0; i <= n; i++) {
            if(a[i] > b[i]) {
                ok = false;break;
            }
            if(i < n && a[i] != b[i]) {
                if(b[i] > b[i+1]+1) {
                    ok = false; break;
                }
             }
        }

        if(ok) cout << "YES\n";
        else cout << "NO\n";
    }
}


