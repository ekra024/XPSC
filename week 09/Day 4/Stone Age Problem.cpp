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
const int N=2e5 + 10;
bool change = false;
int change_val[N];

int main()
{
    optimize();
    ll t = 1;// cin >> t;
    while(t--) {
        ll n, q; cin >> n >> q;;
        ll a[n+1];
        ll sum = 0;
        map<ll,ll> mp;
        for(ll i = 0; i < n; i++) {
            cin >> a[i];
            sum += a[i];
            mp[i] = a[i];
        }

        ll cur = 0;

        while(q--) {
            ll type; cin >> type;
            if(type == 1) {
                ll idx, val; cin >> idx >> val;

                if(mp[idx-1] == 0) {
                    sum -= cur;
                    sum += val;
                    mp[idx-1] = val;
                }
                else {
                    sum -= mp[idx-1];
                    sum += val;
                    mp[idx-1] = val;
                }
            }
            else {
                ll val; cin >> val;
                sum = val*n;
                cur = val;
                mp.clear();
            }

            cout << sum << '\n';
        }
    }
}


