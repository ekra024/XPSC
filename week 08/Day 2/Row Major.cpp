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
        ll n; cin >> n;
        char ch = 'a';
        char ch2 = 'a';
        set<ll> divisor;


        for(ll i = 1; i*i <= n; i++) {
            if(n%i==0) {
               divisor.insert(i);
               divisor.insert(n/i);
            }
        }

        string ans = "";
        ll fre = 0;

        for(ll i = 1; i <= n; i++) {
            if(divisor.find(i) == divisor.end()) {
                fre = i; break;
            }
        }

        if(fre == 0) fre = n+1;

        for(ll i = 1; i <= n; i++) {
            ans += ch;
            ch++;
            ll val = ch - 'a' +  1;
            if(val > fre) ch = 'a';
        }

        cout << ans << '\n';
    }
}


