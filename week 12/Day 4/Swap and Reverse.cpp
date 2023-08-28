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
        ll n, k; cin >> n >> k;
        string s; cin >> s;
        string a = s;
        sort(a.begin(), a.end());
        string t1 = "";
        string ans = "";
        ll f = 0;

        ll mp[26][2] = {0,0};

        for(ll i = 0; i < n; i++) {
            ll r = s[i] - 'a';
            mp[r][i%2]++;
        }

        for(ll i = 0; i < n; i++) {
            for(ll j = 0; j < 26; j++) {
                if(mp[j][i%2]) {
                    mp[j][i%2]--;
                    ans += (j + 'a');
                    break;
                }
            }
        }

        if(k%2) cout << ans << '\n';
        else cout << a << '\n';
    }
}



