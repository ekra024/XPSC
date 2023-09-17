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
    ll k, n; cin >> n >> k;
    vector<ll> a(n), ans, v;
    for(ll i = 0; i < n; i++) cin >> a[i];


    for(ll i = 0; i <= n-k; i++) {

        for(ll j = i; j < i+k; j++) {
            v.push_back(a[j]);
        }

        sort(v.begin(), v.end());
        ans.push_back(v[(k-1)/2]);
        v.clear();
    }

    for(auto it : ans) cout << it << ' ';
    cout << '\n';
}
