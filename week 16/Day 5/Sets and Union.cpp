#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define gcd(a,b)  __gcd(a,b)
#define lcm(a,b) a/(b/__gcd(a,b))
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
template <typename T> using pbds = tree<T, null_type, less<T>,rb_tree_tag, tree_order_statistics_node_update>;
int mod = 1e9 + 7;
const int N=1e5 + 123;

int main()
{
    optimize();
    ll t; cin >> t;
    while(t--) {
        ll n, mx = 0; cin >> n;
        map<ll,ll> v[n];
        map<ll,ll> ump;

        for(ll i = 0; i < n; i++) {
            ll m; cin >> m;
            map<ll,ll>mp;
            for(ll j = 0; j < m; j++) {
                ll x; cin >> x;
                ump[x]++;
                mp[x]++;
            }
            v[i] = mp;
        }

        for(ll i = 1; i <= 50; i++) {
            vector<map<ll,ll> >a;
            map<ll,ll> mp;

            for(ll j = 0; j < n; j++) {
                if(v[j].find(i) != v[j].end()) {
                   continue;
                }
                else a.push_back(v[j]);
            }

            for(ll j = 0; j < a.size(); j++) {
                for(auto it : a[j]) {
                    mp[it.first]++;
                }
            }

            ll cnt = mp.size();
            if(mp.size() < ump.size()) {
                mx = max(mx,cnt);
            }

        }

        cout << mx <<'\n';
    }
}

