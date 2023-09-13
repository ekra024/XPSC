#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define gcd(a,b)  __gcd(a,b)
#define lcm(a,b) a/(b/__gcd(a,b))
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
typedef tree<int, null_type, less_equal<int>, rb_tree_tag,
             tree_order_statistics_node_update>
    ordered_multiset;
int mod = 1e9 + 7;
const int N=1e5 + 123;

int main()
{
    optimize();
    ll n, m; cin >> n >> m;
    vector<ll> b(m), ans;
    ordered_multiset pb;

    for(ll i = 0; i < n; i++) {
        ll x; cin >> x;
        pb.insert(x);
    }
    for(ll i = 0; i < m; i++) {
        ll x; cin >> x;
        ll r = pb.order_of_key(x+1);
        cout << r << ' ';
    }

}


