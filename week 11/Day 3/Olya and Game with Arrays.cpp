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
        ll n; cin >> n;
        vector<ll> v;
        ll temp = n, mn = INT_MAX, sum = 0;
        vector<pair<ll,ll> >pi;
        while(temp--) {
            ll n1; cin >> n1;
            vector<ll> a(n1);
            ll mn1 = INT_MAX , mn2 = INT_MAX, p = 1;

            for(ll i = 0; i < n1; i++) {
                ll x; cin >> x;
                if(x < mn2 && p == 1) {
                    mn2 = x;
                    p = 0;
                }
                else if(x < mn1) {
                    mn1 = max(x, mn2);
                    mn2 = min(x, mn2);
                }
            }

            pi.push_back({mn2, mn1});

            sum += mn1;
            //cout << sum << ' ';
        }

        sort(pi.begin(), pi.end());

        ll sm = INT_MAX;
        for(ll i = 0; i < pi.size(); i++) {
            sm = min(sm, pi[i].second);
        }

        sum = (sum - sm);
        cout << sum + pi[0].first << '\n';
    }
}

