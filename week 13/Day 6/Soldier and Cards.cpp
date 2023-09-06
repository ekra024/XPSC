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
    ll t = 1;// cin >> t;
    while(t--) {
        ll n, k; cin >> n;
        queue <ll> first, second;

        cin >> k;
        for (ll i = 1; i <= k; i++) {
            ll a; cin >> a;
            first.push(a);
        }

        cin >> k;
        for (ll i = 1; i <= k; i++) {
            ll a; cin >> a;
            second.push(a);
        }

        ll count = 0;
        while (!first.empty() and !second.empty()) {
            if (first.front() > second.front()) {
                first.push(second.front());
                first.push(first.front());
            }
            else {
                second.push(first.front());
                second.push(second.front());
            }
            count++;
            first.pop();
            second.pop();
            if (count > 1000) {
                cout << -1 << endl;
                return 0;
            }
        }

        cout << count << " " << (first.empty() ? 2 : 1) << endl;
        }
}


