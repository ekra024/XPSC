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
        ll n; cin >> n;
        priority_queue<pair<ll,ll> > pq;
        vector<pair<ll,ll> > ans;

        for(ll i = 0; i < n; i++) {
            ll x; cin >> x;
            if(x > 0) {
                pq.push({x, i+1});
            }
        }

        while(pq.size() > 1) {
            ll f1 = pq.top().first;
            ll s1 = pq.top().second;
            pq.pop();
            ll f2 = pq.top().first;
            ll s2 = pq.top().second;
            pq.pop();

            ans.push_back({s1, s2});

            if(f1 > 1) {
                pq.push({f1-1, s1});
            }
            if(f2 > 1) {
                pq.push({f2-1, s2});
            }
        }

        cout << ans.size() << '\n';
        for(auto it : ans) cout << it.first <<' '<<it.second<<'\n';
    }
}
