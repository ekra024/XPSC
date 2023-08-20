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
        vector<ll>a(n+1), ans;
        vector<bool>visited(n+10, false);
        for(ll i = 1; i <= n; i++) a[i] = i;

        for(ll i = 1; i <= n; i++) {

            ll temp = i;
            while(temp <= n && !visited[temp]) {
                ans.push_back(temp);
                visited[temp] = true;
                temp = temp*2;
            }

        }

        for(auto it : ans)
            cout << it << ' ';
        cout << '\n';
    }
}
