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
    ll n, x; cin >> n >> x;
    vector<ll> a(n);
    for(ll i = 0; i < n; i++) cin >> a[i];

    ll l = 0, r = 0, sum = 0, cnt = 0;

    while(r <= n) {
        if(sum < x) {
            sum += a[r];
            r++;
        }
        else if(sum == x) {
            cnt++;
            sum -= a[l];
            l++;
        }
        else {
            sum -= a[l];
            l++;
        }
    }

    cout << cnt << '\n';
}


