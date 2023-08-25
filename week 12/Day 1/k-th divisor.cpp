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
    ll n, k; cin >> n >> k;
    vector<ll>a, b;

    a.push_back(1);
    if(n != 1)b.push_back(n);
    for(ll i = 2; i*i <= n; i++) {
        if(n%i == 0) {
            a.push_back(i);
            if(n/i != i) {
                b.push_back(n/i);
            }
        }
    }

    ll sz = a.size() + b.size();
    reverse(b.begin(), b.end());

    if(k > sz) cout << -1 << '\n';
    else if(k <= a.size()) cout << a[k-1] << '\n';
    else {
        k -= a.size();
        cout << b[k-1] << '\n';
    }
}


