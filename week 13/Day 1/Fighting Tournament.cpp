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
        ll n, q; cin >> n >> q;
        deque<ll> dq;
        vector<ll>v[n+1], arr(n+1);
        vector<ll> p(n+1);

        for(ll i = 1; i <= n; i++ ) {
            int a; cin >> a;
            arr[i] = a;
            dq.push_back(a);
            p[a] = i;
        }

        ll win = 0;

        while(dq.front() != n) {
            ll first = dq.front();
            dq.pop_front();
            ll second = dq.front();
            dq.pop_front();
            if(first > second) {
                dq.push_front(first);
                v[p[first]].push_back(win++);
            }
            else {
                dq.push_front(second);
                v[p[second]].push_back(win++);
            }
        }

        while(q--) {
            ll x, k; cin >> x >> k;
            ll ans = lower_bound(v[x].begin(), v[x].end(), k) - v[x].begin();

            if(arr[x] == n && k > win) ans += k - win;

            cout << ans << '\n';
        }
    }
}

