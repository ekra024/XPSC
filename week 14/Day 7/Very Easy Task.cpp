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
ll n, x, y;

bool bs(ll mid)
{
    if(mid < min(x, y)) {
        return false;
    }
    int cnt = 1;
    mid -= min(x, y);

    cnt += (mid/x) + (mid/y);
    return cnt >= n;
}

int main()
{
    optimize();
    cin >> n >> x >> y;
    ll l = 0, r = max(x, y)*n, ans = -1;

    while(l+1 < r) {
        ll mid = (r - l)/2 + l;

        if(bs(mid)) {
            r = mid;
        }
        else l = mid;
    }

    cout << r << '\n';
}

