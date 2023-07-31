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
        ll n, x; cin >> n >> x;
        bool ok = true;
        vector<ll> v(n+1, 0), ans(n+1, -1);
        ans[1] = x;
        v[x] = 1;
        v[1] = 1;

        for(ll i = 2; i < n; i++) {
            for(ll j = i; j <= n; j+=i) {
                if((v[j]==0) && i == j) {
                    ans[i] = j;
                    v[j] = 1;
                    break;
                }
                else if((v[j]==0) && (n%j==0)) {
                    ans[i] = j;
                    v[j] = 1;
                    break;
                }
            }
            if(ans[i] == -1) {
                ok = false;
                break;
            }
        }
        ans[n] = 1;

        if(ok) {
            for(ll i = 1; i <= n; i++) cout << ans[i] << ' ';
            cout << '\n';
        }
        else cout << "-1\n";
    }
}


