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
    ll t = 1;// cin >> t;
    while(t--) {
        ll n, q; cin >> n >> q;
        vector<ll> a(n), v;
        map<ll,ll> mp;
        for(ll i = 0; i < n; i++){
            cin >> a[i];
        }

        while(q--) {
            ll l, r; cin >> l >> r;
            mp[l]++;
            mp[r+1]--;
        }

        ll sum = 0, ans = 0;
        for(ll i = 1; i <= n; i++) {
            sum += mp[i];
            v.push_back(sum);
        }
        sort(v.rbegin(), v.rend());
        sort(a.rbegin(), a.rend());


        for(ll i = 0; i < n; i++) {
            ans = ans + (a[i]*v[i]);
        }

        cout << ans << '\n';
    }
}


