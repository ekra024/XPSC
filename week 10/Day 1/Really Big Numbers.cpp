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
        sum += (n%10);
        n /= 10;
    }
    return sum;
}

int main()
{
    optimize();
    ll n, s; cin >> n >> s;

    ll l = 0, r = n, ans = -1;

    while(l <= r) {
        ll mid = (r-l)/2 + l;

        ll diff = mid - SumOfDigit(mid);
        if(diff >= s) {
            ans = mid;
            r = mid - 1;
        }
        else {
            l = mid + 1;
        }
    }

    if(ans != -1) cout << (n - ans) + 1 << '\n';
    else cout << 0 << '\n';
 }


