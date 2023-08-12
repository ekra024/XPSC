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
        ll n, x; cin >> n >> x;
        vector<ll> a(n), sort_a(n);
        for(ll i = 0; i < n; i++) {
            cin >> a[i];
            sort_a[i] = a[i];
        }

        sort(sort_a.begin(), sort_a.end());

        bool ok = true;

        for(ll i = 0; i < n; i++) {
            if(a[i]!= sort_a[i]) {
                if(i+x >= n && i-x < 0) {
                    ok = false;break;
                }
            }
        }

        if(ok) cout << "YES\n";
        else cout << "NO\n";
    }
}

