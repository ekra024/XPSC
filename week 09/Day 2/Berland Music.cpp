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
        ll n; cin >> n;
        vector<ll> a(n), ans(n+1);
        vector<pair<ll,ll> > ans1, ans2;

        for(ll i = 0; i < n; i++) cin >> a[i];
        string s; cin >> s;
        ll cnt = n;

        for(ll i = 0; i < n; i++) {
            if(s[i] == '1') {
                ans1.push_back({a[i], i+1});
            }
            else ans2.push_back({a[i] , i+1});
        }
        sort(ans1.rbegin(), ans1.rend());
        sort(ans2.rbegin(), ans2.rend());

        for(ll i = 0; i < ans1.size(); i++) {
            ans[ans1[i].second] = cnt;
            cnt--;
        }
        for(ll i = 0; i < ans2.size(); i++) {
            ans[ans2[i].second] = cnt;
            cnt--;
        }

        for(ll i = 1; i <= n; i++) cout << ans[i] << ' ';
        cout << '\n';
    }
}


