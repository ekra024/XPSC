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
    ll t=1;// cin >> t;
    while(t--) {
        ll n; cin >> n;
        vector<ll> a(n);
        for(ll i = 0; i < n; i++)
            cin >> a[i];

        ll q; cin >> q;
        while(q--) {
            ll query; cin >> query;
            auto it1 = lower_bound(a.begin(), a.end(), query);
            auto it2 = upper_bound(a.begin(), a.end(), query);

            int idx1 = it1 - a.begin();
            int idx2 = it2 - a.begin();
            if(idx1 == 0)
                cout << 'X'<< ' ';
            else cout << a[idx1 -1] << ' ';
            if(idx2 == n) cout << "X\n";
            else cout << a[idx2] << '\n';
        }
    }
}


