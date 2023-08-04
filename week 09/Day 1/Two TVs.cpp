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
        ll n; cin >> n;
        map<ll,ll> mp;
        for(ll i = 0; i < n; i++) {
            ll l, r; cin >> l >> r;
            mp[l]++;
            mp[r+1]--;
        }

        bool ok = true;
        ll sum = 0;

        for(auto it : mp) {
            sum += it.second;
            if(sum > 2) {
                ok = false;
                break;
            }
        }

        if(ok) cout << "YES\n";
        else cout << "NO\n";
    }
}


