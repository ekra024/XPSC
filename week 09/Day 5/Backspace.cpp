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
    ll t; cin >> t;
    while(t--) {
        string s, t; cin >> s >> t;

        ll k = s.size()-1;
        ll m = t.size()-1;
        bool ok = true;

        for(ll i = m; i >= 0; i--) {
            while(k >= 0 && s[k]!= t[i]) {
                k -= 2;
            }
            if(k < 0){
                ok = false;break;
            }
            k -= 1;
        }

        if(ok) cout << "YES\n";
        else cout << "NO\n";

    }
}


