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
    ll t ; cin >> t;
    while(t--) {
        ll n, k; cin >> n >> k;
        ll p = 1, ans = 0;

        while(k > 0) {
            if(k & 1) {
                ans = (ans+p)%mod;
            }
            k /= 2;
            p = (p*n)%mod;
        }

        cout << ans << '\n';
    }
}


