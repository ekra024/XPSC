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
        ll n; cin >> n;
        vector<ll>a(n),b[n+1];
        map<ll,ll>mp;
        bool ok = false;

        for(ll i = 0; i < n; i++) {
            cin >> a[i];
            mp[a[i]]++;
            if(mp[a[i]] > 2) ok = true;
        }

        if(ok) {
            cout << "NO\n"; continue;
        }

        for(ll i = 0; i < n; i++) {
            b[a[i]].push_back(i);
        }
        vector<ll> zero,two;

        for(ll i = 1; i <= n; i++) {
            if(mp[i] == 0) zero.push_back(i);
            else if(mp[i] == 2) two.push_back(i);
        }

        auto p = a, q = a;

        for(ll i = 0; i < two.size(); i++) {
            if(two[i] < zero[i]) {
                cout << "NO\n";ok = true;
                break;
            }
            ll mx = two[i];
            p[b[mx][0]] = zero[i];
            q[b[mx][1]] = zero[i];
        }
        if(ok) continue;
        else {
            cout << "YES\n";
            for(ll i = 0; i < n; i++) {
                cout << p[i] << ' ';
            }
            cout << '\n';
            for(ll i = 0; i < n; i++) {
                cout << q[i] << ' ';
            }
            cout << '\n';
        }
    }
}


