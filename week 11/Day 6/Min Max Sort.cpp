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
        vector<ll>a(n), posi(n+1), len(n+1,0);

        for(ll i = 0; i < n; i++) {
            cin >> a[i];
            posi[a[i]] = i;
        }

        ll ans = n;


        for(ll i = n-1; i >= 1; i--) {
            if(posi[i] < posi[i+1]) {
                len[i] = len[i+1] + 1;
            }
            else len[i] = 1;
        }


        for(ll i = 1; i <= n; i++) {
            ans = min(ans, max(i-1, n - (i+len[i]-1)));
        }
        if(is_sorted(a.begin(), a.end()))
            cout << 0 << '\n';
        else
        cout << ans << '\n';

    }
}

