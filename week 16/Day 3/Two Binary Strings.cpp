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
        string a, b; cin >> a >> b;
        bool ok = false;
        ll l = 0, r = a.size();

        for(ll i = 0; i < r-1; i++) {
            if(a[i]==b[i] && a[i] =='0'&& a[i+1] == b[i+1] && b[i+1]=='1') {
                ok = true; break;
            }
        }

        if(ok) cout << "YES\n";
        else cout << "NO\n";
    }
}


