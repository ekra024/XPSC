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
        ll n, s1, s2; cin >> n >> s1 >> s2;
        vector<pair<ll,ll> > a;
        vector<ll> ans1, ans2;

        for(ll i = 0; i < n; i++) {
            ll x; cin >> x;
            a.push_back({x, i+1});
        }

        sort(a.rbegin(), a.rend());
        ll t1 =s1, t2 = s2;

        for(ll i = 0; i < n; i++) {
            if(t1 < t2) {
                ans1.push_back(a[i].second);
                t1 = t1 + s1;
            }
            else {
                ans2.push_back(a[i].second);
                t2 = t2 + s2;
            }

        }

        cout << ans1.size() << ' ';
        if(ans1.size()) {
        for(auto it: ans1)
            cout << it << ' ';
        }
        cout << '\n';
        cout << ans2.size() << ' ';
        if(ans2.size()) {
        for(auto it: ans2)
            cout << it << ' ';
        }
        cout << '\n';
    }
}


