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
    ll t = 1;
    ll n, q;
    while(true) {
        cin >> n >> q;
        if(n==0 && q==0)break;
        vector<ll> a(n);

        for(ll i = 0; i < n; i++) {
            cin >> a[i];
        }

        sort(a.begin(), a.end());
        cout << "CASE# "<< t++ << ":\n";

        while(q--) {
            ll query; cin >> query;
            auto it = lower_bound(a.begin(), a.end(), query);
            if(*it == query) {
                ll idx = it - a.begin();
                cout << query << " found at "<< idx+1 << '\n';
            }
            else {
                cout<< query <<" not found\n";
            }
        }
    }
}

