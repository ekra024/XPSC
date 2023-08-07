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
        vector<ll> a(n);
        for(ll i = 0; i < n; i++) cin >> a[i];

        ll mn = 0, mx = 1e9;

        for(ll i = 0; i < n-1; i++) {
            if(a[i+1] > a[i]) {
                mx = min(mx, (a[i]+a[i+1])/2);
            }
            else if(a[i] > a[i+1]) {
                mn = max(mn, (a[i] + a[i+1]+1)/2);
            }
        }

        if(mx < mn) cout << -1 << '\n';
        else cout << mn << '\n';
    }
}


