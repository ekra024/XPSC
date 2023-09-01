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
const int N = 1e6 + 10;
vector<ll> h(N), hsh(N);

int main()
{
    optimize();
    ll t; cin >> t;
    while(t--) {
        ll n; cin >> n;
        string s; cin >> s;
        vector<ll> a;

        for(ll i = 0; i < n; i++) {
            if(s[i] == '0') {
                h[i+1] = 1;
                hsh[i+1] = 1;
            }
            else h[i+1] = 0;
        }

        ll cost = 0;
        for(ll i = 1; i <= n; i++) {
            if(h[i]) {
                for(ll j = i; j <= n; j += i) {
                    if(h[j] && hsh[j]) {
                        cost += i;
                        hsh[j] = 0;
                    }
                    else if(h[j]) continue;
                    else break;
                }
            }
        }

        cout << cost << '\n';
    }
}


