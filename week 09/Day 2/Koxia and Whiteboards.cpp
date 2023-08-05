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
        ll n, m; cin >> n >> m;
        vector<ll> b(m);
        priority_queue<ll> a;

        for(ll i = 0; i < n; i++) {
            int in; cin >> in;
            a.push(-in);
        }
        for(ll i = 0; i < m; i++) cin >> b[i];

        for(ll i = 0; i < m; i++) {
            a.pop();
            a.push(-b[i]);
        }

        ll sum = 0;
        while(!a.empty()) {
            sum += a.top()*-1;
            a.pop();
        }

        cout << sum << '\n';
    }
}


