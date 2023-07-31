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
        ll n, c, q; cin >> n >> c >> q;
        string s; cin >> s;
        vector<ll> len(c+1), l(c+1), r(c+1);
        len[0] = n;

        for(ll i = 1; i <= c; i++) {
            cin >> l[i] >> r[i];
            len[i] = len[i-1] + (r[i] - l[i]) + 1;
        }

        while(q--) {
            ll k; cin >> k;
            ll i = c;
            while(i != 0) {
                if(len[i-1] >= k) i--;
                else {
                    k = k - len[i-1];
                    k = l[i] + k - 1;
                    i--;
                }
            }

            cout << s[k-1] << '\n';
        }
    }
}


