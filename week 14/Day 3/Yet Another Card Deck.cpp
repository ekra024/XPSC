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
    ll n, q; cin >> n >> q;
    map<ll,ll> mp;
    vector<pair<ll,ll> > v;

    for(ll i = 1; i <= n; i++) {
        ll x; cin >> x;
        if(mp[x] == 0) {
            v.push_back({x, i});
        }
        mp[x]++;
    }
    vector<ll> ans;
    while(q--) {
        ll t; cin >> t;
        ll limit;
        for(ll i = 0; i < v.size(); i++) {
            if(v[i].first == t) {
                ans.push_back(v[i].second);
                limit = v[i].second;
                v[i].second = 1;
                break;
            }
        }

        for(ll i = 0; i < v.size(); i++) {
            if(v[i].second < limit && v[i].first != t) {
                v[i].second++;
            }
        }
    }

    for(auto it : ans) cout << it << ' ';
    cout << '\n';
}


