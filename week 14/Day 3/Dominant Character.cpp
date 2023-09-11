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
        ll n; cin >> n;
        string s; cin >> s;

        ll ans = INT_MAX, l = 0, r = 0, cnt = 0, res = INT_MAX;

        for(ll i = 0; i < n-1; i++) {
            if(s[i] == 'a' && s[i+1] == 'a') {
                r = 2;
                ans = min(ans, r);
            }
            else if(i < n-2 && s[i] == 'a' && s[i+2] == 'a') {
                r = 3;
                ans = min(ans, r);
            }
            else if(i < n-3 && s[i] == 'a' && s[i+3] == 'a' && s[i+1]!=s[i+2]) {
                r = 4;
                ans = min(ans, r);
            }
            else if(i < n-6 && s[i]=='a'&&s[i+3]=='a' && s[i+6]=='a' && s[i+1] != s[i+5]) {
                r = 7;
                ans = min(ans,r);
            }
        }
        if(ans == INT_MAX) cout << -1 << '\n';
        else cout << ans << '\n';
    }
}

