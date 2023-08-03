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
        ll n, k; cin >> n >> k;
        map<ll , ll> mp;

        ll ans = 0;

        for(ll i = 0; i < n; i++) {
            int a; cin >> a;
            ll rem = (k -a%k)%k;
            if(rem && mp[rem]) {
                mp[rem] += k;
                ans = max(ans, mp[rem] + 1);
            }
            else if(rem) {mp[rem] = rem;
            ans = max(ans, mp[rem]+1);
            }
        }

        cout << ans << '\n';
    }
}

