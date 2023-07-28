#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
template <typename T> using pbds = tree<T, null_type, less<T>,
rb_tree_tag, tree_order_statistics_node_update>;

#define all(x) (x).begin(), (x).end()
#define gcd(a,b)  __gcd(a,b)
#define lcm(a,b) (a*b)/__gcd(a,b)
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int mod = 1e9 + 7;
const int N=1e5;
int hsh[N];

int main()
{
    optimize();
    ll t = 1;// cin >> t;
    while(t--) {
        ll n, m; cin >> n >> m;
        map<ll, ll> mp;
        vector<ll> ans;
        ll sum = 0;

        for(ll i = 0; i < m; i++) {
            int p , time; cin >> p >> time;
            mp[p] += time;
            sum += mp[p];
            ans.push_back(sum);
        }

        for(auto it : ans) cout << it << '\n';
    }
}



