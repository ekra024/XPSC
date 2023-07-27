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
        ll n, m, k; cin >> n >> m >> k;
        ll a[n][m];
        ll capacity = 0;
        pair<ll,ll>p1 = {-1,-1},p2 = {-1, -1};

        for(ll i = 0; i < n; i++) {
            for(ll j = 0; j < m; j++) {

            }
        }
    }
}



