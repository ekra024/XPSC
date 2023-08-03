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
        vector<ll> a(n) , ans;
        for(ll i = 0; i < n; i++) cin >> a[i];

        ll mn = *min_element(a.begin(), a.end());

        for(ll i = 0; i < n; i++) {
            ll g = gcd(a[i], mn);
            if(g == mn) {
                ans.push_back(a[i]);
                a[i] = -1;
            }
        }

        sort(ans.begin(), ans.end());
        ll l = 0;

        for(ll i = 0; i < n; i++) {
            if(a[i] == -1) {
                a[i] = ans[l];
                l++;
            }
        }


        if(is_sorted(a.begin(), a.end()))
            cout << "YES\n";
        else cout << "NO\n";
    }
}

