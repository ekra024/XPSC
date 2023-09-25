#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define gcd(a,b)  __gcd(a,b)
#define lcm(a,b) a/(b/__gcd(a,b))
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
template <typename T> using pbds = tree<T, null_type, less<T>,rb_tree_tag, tree_order_statistics_node_update>;
int mod = 1e9 + 7;
const int N=1e5 + 123;

int main()
{
    optimize();
    ll t; cin >> t;
    while(t--) {
        ll n; cin >> n;
        vector<ll> a(n), b(n);
        ll mn1 = INT_MAX, mn2 = INT_MAX;
        for(ll i = 0; i < n; i++) {
            cin >> a[i];
            mn1 = min(mn1, a[i]);
        }
        for(ll i = 0; i < n; i++) {
            cin >> b[i];
            mn2 = min(mn2 , b[i]);
        }
        ll cost = 0;
        ll cost2 = 0;

        for(ll i = 0; i < n; i++) {
            cost = cost + (b[i]+mn1);
        }

        for(ll i = 0; i < n; i++) {
            cost2 = cost2 + (a[i]+mn2);
        }


        cout << min(cost, cost2) <<'\n';
    }
}


