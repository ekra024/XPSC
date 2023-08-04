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
        ll n, W; cin >> n >> W;
        vector<pair<ll,ll> > v;
        vector<ll > ans;

        for(ll i = 0; i < n; i++) {
            int a; cin >> a;
            v.push_back({a, i+1});
        }

        sort(v.begin(), v.end());

        ll sum = 0, w = W/2;
        bool ok = false;

        for(ll i = 0; i < n; i++) {
            ll total = sum + v[i].first;
            if(v[i].first <= W && v[i].first*2 > W) {
                ok = true;
                ans.clear();
                ans.push_back(v[i].second);
                break;
            }
            else if(total < W) {
                sum += v[i].first;
                if(sum*2 >= W) {
                    ans.push_back(v[i].second);
                    ok = true;
                    break;
                }
                ans.push_back(v[i].second);
            }
            else if(total > W) break;
        }

        if(ok) {
            cout << ans.size() << '\n';
            for(auto it : ans)
                cout << it << ' ';
            cout << '\n';
        }
        else cout << -1 << '\n';
    }
}


