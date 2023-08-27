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
    ll t =1;// cin >> t;
    while(t--) {
        ll n; cin >> n;
        vector<ll> p(n), a(n);
        for(ll i = 0; i < n; i++) cin >> p[i];

        iota(a.begin(), a.end(), 0);
        vector<vector<ll> >v(n, vector<ll>(n, -1));

        for(ll t = 0; t < n; t++) {
            for(ll i = 0; i < a.size(); i++) {
                v[t+i][i] = p[a[i]];
            }
            ll x = -1;
            for(ll i = 0; i < a.size(); i++) {
                if(p[a[i]] == t+1) {
                    x = i;
                }
            }
            a.erase(a.begin()+x);
        }

        for(ll i = 0; i < n; i++) {
            for(ll j = 0; j <= i; j++) {
                cout << v[i][j] << " \n"[j==i];
            }
        }
    }
}


