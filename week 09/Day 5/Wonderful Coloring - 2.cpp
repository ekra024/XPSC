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
        vector<ll> v[n+3], p;
        int color[n+3] = {0};
        map<ll,ll> mp;
        vector<pair<ll,ll> > ans;

        for(ll i = 0; i < n; i++) {
            int a; cin >> a;
            mp[a]++;
            v[a].push_back(i);
        }

        for(auto it : mp) {
            if(it.second >= k) {
                ll temp = 1;
                vector<ll> a= v[it.first];
                for(ll i = 0; i < k; i++) {
                    color[a[i]] = temp;
                    temp++;
                }
            }
            else {
                vector<ll> a= v[it.first];
                for(ll i = 0; i < a.size(); i++) {
                    ans.push_back({it.first, a[i]});
                }
            }
        }

        ll sz = 1;
        ll rem = ans.size()%k;
        for(ll i = 0; i < ans.size()-rem; i++) {
            color[ans[i].second] = sz;
            sz++;
            if(sz > k) sz = 1;
        }

        for(ll i = 0; i < n; i++)
            cout << color[i] << ' ';
        cout << '\n';
    }
}


