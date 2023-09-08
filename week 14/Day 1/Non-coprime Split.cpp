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
    ll t; cin >> t;
    while(t--) {
        ll l, r; cin >> l >> r;
        if(l < 4) l = 4;
        ll a = -1, b = -1;

        for(ll i = l; i <= r; i++) {
            for(ll j = 2; j*j <= i; j++) {
                if(i%j == 0) {
                    a = j; b = i -j;
                    break;
                }
            }
            if(a != -1 && b != -1) break;
        }

        if(a!= -1 && b!= -1) {
            cout << a << ' '<< b << '\n';
        }
        else cout << -1 << '\n';
    }
}
