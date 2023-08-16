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
        ll n, k, mx = INT_MIN; cin >> n >> k;
        vector<ll> posi, neg;

        for(ll i = 0; i < n; i++) {
            ll x; cin >> x;
            if(x < 0) neg.push_back(x*-1);
            else posi.push_back(x);

            mx = max(mx, abs(x));
        }


        sort(posi.rbegin(), posi.rend());
        sort(neg.rbegin(), neg.rend());
        ll sum = 0, p = k-1;

        for(ll i = 0; i < posi.size(); i+=k) sum += (posi[i]*2);
        for(ll i = 0; i < neg.size(); i+=k) sum += (neg[i]*2);

        cout << sum - mx<< '\n';

    }
}


