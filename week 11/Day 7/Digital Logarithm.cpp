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

ll digit_log(ll n)
{
    ll cnt = 0;
    while(n) {
        n/=10;
        cnt++;
    }
    return cnt;
}

int main()
{
    optimize();
    ll t; cin >> t;
    while(t--) {
        ll n; cin >> n;
        priority_queue<ll>a, b;

        for(ll i = 0; i < n; i++) {
            ll x; cin >> x;
            a.push(x);
        }

        for(ll i = 0; i < n; i++) {
            ll x; cin >> x;
            b.push(x);
        }

        ll op = 0;
        while(!a.empty() && !b.empty()) {
            ll f = a.top();
            ll s = b.top();

            if(f == s) {
                a.pop();b.pop();
            }
            else if(f > s) {
                ll val = digit_log(f);
                a.pop();
                a.push(val);
                op++;
            }
            else {
                ll val = digit_log(s);
                b.pop();
                b.push(val);
                op++;
            }
        }

        cout << op << '\n';
    }
}


