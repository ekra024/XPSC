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
        ll n, k; cin >> n >> k;
        ll res = k;
        vector<ll>a(n);
        bool first = true;

        for(ll i = 0; i < n; i++) {
            ll r = k - (n - i);
            if(r >= 0) {
                a[i] = 1000;
                k = k - (n - i);
            }
            else {
                a[i] = k;
                for(ll j = i+1; j < i+k; j++) {
                    a[j] = -1;
                }
                for(ll j = i+k; j < n; j++) {
                    a[j] = -2;
                }
                break;
            }
        }

        for(auto it : a)
            cout << it << ' ';
        cout << '\n';
    }
}


