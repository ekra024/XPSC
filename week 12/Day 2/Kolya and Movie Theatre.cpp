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
        ll n, m, d; cin >> n >> m >> d;
        vector<ll> a(n);
        priority_queue<ll, vector<ll>, greater<ll> > pq;

        for(ll i = 0; i < n; i++) cin >> a[i];

        ll ans = 0, sum = 0;
        for(ll i = 0; i < n; i++) {
            if(a[i] > 0) {
                pq.push(a[i]);
                sum += a[i];
            }
            if(pq.size() > m) {
                sum -= pq.top();
                pq.pop();
            }

            ans = max(ans, sum -((i+1)*d));
        }

        cout << ans << '\n';
    }
}


