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
        ll n, m, x, y, d;
        cin >> n >> m >> x >> y >> d;

        bool ok = false;
        if(abs(x-1)> d && abs(m-y) > d) {
            ok = true;
        }
        if(abs(y-1) > d && abs(n-x) > d) {
            ok = true;
        }

        if(x==1 && (y-1) > d && (n-x) > d) {
            ok = true;
        }
        if(y==1 && (x-1)>d && (m-y) > d) ok = true;

        if(ok)cout << (n-1)+(m-1) << '\n';
        else cout << - 1 << '\n';
    }
}

