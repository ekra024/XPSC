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
    ll n = t;
    vector<pair<pair<ll,ll>,ll > > v;
    for(ll i = 0; i < n; i++) {
        ll a, b; cin >> a >> b;
        v.push_back({{a, b}, i});
    }

    sort(v.begin(), v.end());
    priority_queue<pair<ll,ll> , vector<pair<ll,ll> >, greater<pair<ll,ll>> > pq;

    ll l = 1 , mx = INT_MIN;
    vector<ll> ans(n);
    for(ll i = 0; i < n; i++) {
        if(pq.empty()) {
            l = 1;
            ans[v[i].second] = l;
            pq.push({v[i].first.second , l});
        }
        else {
            ll take = pq.top().first;
            ll s = pq.top().second;
            if(take < v[i].first.first) {
                ans[v[i].second] = pq.top().second;
                pq.pop();
                pq.push({v[i].first.second, s});
            }
            else {
                l++;
                ans[v[i].second] = l;
                pq.push({v[i].first.second, l});
            }
        }
        mx = max(mx, l);
    }

    cout << mx << '\n';
    for(auto it : ans) cout << it << ' ';
    cout << '\n';
}

