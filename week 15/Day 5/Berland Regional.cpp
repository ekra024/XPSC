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

bool cmp(pair<ll,ll>&a, pair<ll,ll>&b)
{
    if(a.first == b.second)
        return a.second > b.second;
    return a.second < b.second;
}
int main()
{
    optimize();
    ll t; cin >> t;
    while(t--) {
        ll n; cin >> n;
        vector<vector<ll> > v(n);
        vector<ll> ans(n+1), a(n+1);

        for(ll i = 0; i < n; i++) {
            cin >> a[i]; a[i]--;
        }
        for(ll i = 0; i < n; i++) {
            int x; cin >> x;
            v[a[i]].push_back(x);
        }

        for(ll i = 0; i < n; i++) {
            ll sz = v[i].size();
            sort(v[i].rbegin(), v[i].rend());
            vector<ll> preSum(sz+1);

            for(ll j = 0; j < sz; j++) {
                preSum[j+1] = preSum[j] + v[i][j];
            }

            for(ll k = 1; k <= sz; k++) {
                ans[k] += preSum[sz- sz%k];
            }
        }

        for(ll i = 1; i <= n; i++) cout << ans[i] << ' ';
        cout << '\n';

    }
}


