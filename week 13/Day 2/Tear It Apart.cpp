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
        string s; cin >> s;
        ll sz = s.size();
        vector<ll>a[26];
        for(ll i = 0; i < sz; i++) {
            a[s[i]-'a'].push_back(i);
        }
        ll ans = sz;
        for(ll i = 0; i < 26; i++) {
            ll p = -1;
            a[i].push_back(sz);
            ll res = 0;
            for(auto it : a[i]) {
                ll len = it - p - 1;
                if(len)
                    res = max(res,__lg(len)+1);
                p = it;
            }
            ans = min(ans, res);
        }

        cout << ans << '\n';
    }
}

