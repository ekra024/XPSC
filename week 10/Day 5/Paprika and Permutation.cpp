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
        vector<ll> b;
        vector<bool> visited(n+10, false);

        for(ll i = 0; i < n; i++) {
            ll x; cin >> x;
            if(x <= n && !visited[x]) {
                visited[x] = true;
            }
            else {
                b.push_back(x);
            }
        }

        bool ok = true;
        sort(b.begin(), b.end());
        ll l = 0;

        for(ll i = 1; i <= n; i++) {
            if(!visited[i]) {
                ll res = b[l]/2;
                if(i < res) ok = true;
                else if(b[l]%2 && i <= res) ok = true;
                else {
                    ok = false; break;
                }
                l++;
            }
        }

        if(ok) cout << b.size() << '\n';
        else cout << -1 << '\n';
    }
}

