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
    ll t; cin >> t;
    while(t--) {
        ll n, k; cin >> n >> k;
        unordered_map<ll,ll> mp1, mp2;
        vector<string>a(n),b(n);

        for(ll i = 0; i < n; i++) {
            cin >> a[i];
            for(ll j = 0; j < a[i].size(); j++) {
                ll val = a[i][j] - '0';
                mp1[val]++;
            }
        }

        for(ll i = 0; i < n; i++) {
            cin >> b[i];
            for(ll j = 0; j < b[i].size(); j++) {
                ll val = b[i][j] - '0';
                mp2[val]++;
            }
        }

        bool ok = true;

        for(ll i = 0; i < n; i++) {
            if(a[i].size() != b[i].size()) ok = false;
        }

        if(ok) {
            ll cnt = 0;
            for(ll i = 0; i <= 9; i++) {
                cnt += abs(mp1[i] - mp2[i]);
            }
            if(cnt/2 > k) ok = false;
        }

        if(ok) cout << "YES\n";
        else cout << "NO\n";
    }
}



