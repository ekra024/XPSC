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

bool solve(ll w, ll h, ll n, ll x)
{
    ll cnt = 0;
    ll mn1 = (x/w);
    ll mn2 = (x/h);
    cnt = mn1*mn2;

    return cnt >= n;
}

int main()
{
    optimize();
    ll w, h, n; cin >> w >> h >> n;

    ll l = 0, r = 1;
    while(solve(w, h, n, r) == false) {
        r*=2;
    }

    while(l+1 < r) {
        ll mid = (r-l)/2 + l;

        if(solve(w, h, n, mid)) r = mid;
        else l = mid;
    }

    cout << r << '\n';
}


