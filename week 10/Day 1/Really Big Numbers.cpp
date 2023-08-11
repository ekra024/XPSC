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

ll SumOfDigit(ll n)
{
    ll sum = 0;
    while(n) {
        sum += n%10;
        n/= 10;
    }
    return sum;
}

int main()
{
    optimize();
    ll t = 1;// cin >> t;
    while(t--) {
        ll n, s; cin >> n >> s;
        ll l = 1, h = 1e18;

        while(l < h) {
            ll mid = l + (h-l)/2;
            ll res = SumOfDigit(mid);
            ll sub = mid - res;
            if(sub >= s) h = mid;
            else l = mid + 1;
        }
        ll c = 0;
       ll ans = max(c, (n-h+1));
       if(n == s) cout << 0 << '\n';
       else
       cout << ans << '\n';
    }
}

