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
        ll n, x; cin >> n >> x;
        vector<ll> a(n);
        multiset<ll> s;

        for(ll i = 0; i < n; i++) {
            cin >> a[i];
            s.insert(a[i]);
        }
        sort(a.begin(), a.end());
        ll add = n;

        for(ll i = 0; i < n; i++) {
            ll f = a[i]*x;
            if(s.empty()) break;
            if(s.find(f) != s.end() && s.find(a[i]) != s.end()) {
                add -= 2;
                auto it = s.find(f);
                s.erase(it);
                auto it2 = s.find(a[i]);
                s.erase(it2);
            }
        }

        cout << add << '\n';
    }
}


