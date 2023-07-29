#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define gcd(a,b)  __gcd(a,b)
#define lcm(a,b) (a*b)/__gcd(a,b)
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
template <typename T> using pbds = tree<T, null_type, less_equal<T>,rb_tree_tag, tree_order_statistics_node_update>;
int mod = 1e9 + 7;
const int N=1e5;

int main()
{
    optimize();
    ll t; cin >> t;
    while(t--) {
        ll n; cin >> n;
        vector<ll> a(n);
        for(ll i = 0; i < n; i++) cin >> a[i];

        pbds<ll> pbs;
        ll cross = 0;

        for(ll i = n-1; i >= 0; i--) {
            if(i == n-1) pbs.insert(a[i]);
            else {
                ll cnt = pbs.order_of_key(a[i]+1);
                cross += cnt;
                pbs.insert(a[i]);
            }
        }

        cout << cross << '\n';
    }
}


