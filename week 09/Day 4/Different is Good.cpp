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
        ll n; string s;
        cin >> n >> s;
        map<char, ll> mp;
        bool ok = false;
        ll cnt = 0;

        for(ll i = 0; i < n; i++) {
            if(mp[s[i]]) cnt++;
            mp[s[i]]++;
        }

        if(cnt+ mp.size() <= 26) ok = true;
        if(ok) cout << cnt << '\n';
        else cout << -1 << '\n';
    }
}


