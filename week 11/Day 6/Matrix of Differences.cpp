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
const int N=1e2 + 5;

int main()
{
    optimize();
    ll t; cin >> t;
    while(t--) {
        ll n; cin >> n;
        ll l = 1, r = n*n;
        ll a[N][N];
        ll f=1, s=1;

        for(ll i = 0; i <= r; i++) {
            a[f][s] = l;l++;
            s++;
            if(s > n) {
                f++; s = 1;
            }
            a[f][s] = r;r--;
            s++;
            if(s > n) {
                f++; s = 1;
            }

        }

        if(n%2) a[f][s] = l;

        for(ll i = 1; i <= n; i++) {
            for(ll j = 1; j <= n && (i%2); j++) {
                cout << a[i][j] << ' ';
            }
            for(ll j = n; j >= 1&& (i%2==0); j--) {
                cout << a[i][j] << ' ';
            }
            cout << '\n';
        }
    }
}

