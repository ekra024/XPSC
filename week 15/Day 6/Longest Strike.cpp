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
        ll n, k; cin >> n >> k;
        vector<ll> a(n), v;
        map<ll,ll> mp;
        for(ll i = 0; i < n; i++) {
            cin >> a[i];
            mp[a[i]]++;
        }

        for(auto it : mp) {
            if(it.second >= k) {
                v.push_back(it.first);
            }
        }

        if(v.size()) {
            sort(v.begin(), v.end());
            ll mx = v[0], mn = v[0], ele = 0, l = v[0];

            for(ll i = 0; i < v.size()-1; i++) {
                if(v[i] == v[i+1]-1) {
                    if(v[i+1]-l > ele) {
                        mx = l;
                        mn = v[i+1];
                        ele = v[i+1] - l;
                    }
                }
                else l = v[i+1];
            }

            cout << mx << ' '<< mn << '\n';
        }
        else cout << -1 << '\n';
    }
}


