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
vector<ll>prime;


int main()
{
    optimize();
    ll t; cin >> t;
    while(t--) {
        ll n; cin >> n;
        char c; cin >> c;
        string s; cin >> s;

        ll op = -1, even = 0, odd = 0;
        bool ok = true;

        for(ll i = 0; i < n; i++) {
            if(s[i] != c) {
                ok = false;
            }
            else op = i;
        }


        if(ok) cout << 0 << '\n';
        else if(op == n-1 || op >= n/2) {
            cout << 1 << '\n'<< op + 1 << '\n';
        }
        else cout << 2 << '\n'<< n-1 << ' '<< n << '\n';
    }
}


