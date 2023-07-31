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

ll parity(ll val, ll n, vector<ll>&a)
{
    ll res = 0, sum = 0;
    for(ll i = 1; i <= n; i++) {
        if(a[i] != val) {
            sum += (val - a[i]);
        }
        res += abs(sum);
        val ^= 1;
    }

    return res;
}

int main()
{
    optimize();
    ll t; cin >> t;
    while(t--) {
        ll n; cin >> n;
        map<ll,ll> mp;
        vector<ll> a(n+1);

        for(ll i = 1; i <= n; i++) {
            cin >> a[i];
            a[i] = a[i] % 2;
            mp[a[i]]++;
        }

        ll ans = -1;

        if(n%2==0 && mp[0]== mp[1]) ans = min(parity(0, n, a), parity(1, n, a));
        else if(n%2) {
            if(mp[1] == mp[0]+1) ans = parity(1, n, a);
            else if(mp[0] == mp[1]+1) ans = parity(0, n, a);
        }

        cout << ans << '\n';
    }
}


