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
        vector<ll> a(n+1);
        for(ll i = 1; i <= n; i++) cin >> a[i];
        ll cnt = 0;
        bool ok, ans = false;

        for(ll i = 1; i <= n; i++) {
            ok = true;
            for(ll j = i+1; j >= 2; j--) {
                if(a[i]%j) {
                    ok = false; break;
                }
            }
            if(ok) {
                ans = true;
                break;
            }
        }

        if(ans) cout << "NO\n";
        else cout << "YES\n";
    }
}


