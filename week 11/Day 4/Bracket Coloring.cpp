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
        ll sz = count(s.begin(), s.end(), '(');
        if(sz*2 != n) {
            cout << -1 << '\n'; continue;
        }

        vector<ll> ans(n, 2), a;

        for(ll i = 0; i < n; i++) {
            if(s[i] == '(') {
                a.push_back(i);
            }
            else if(!a.empty()) {
                ans[i] = 1;
                ans[a.back()] = 1;
                a.pop_back();
            }
        }

        if(count(ans.begin(), ans.end(), 2)) {
            a.clear();
            ans.assign(n, 2);
            for(ll i = 0; i < n; i++) {
                if(s[i] == ')')
                    a.push_back(i);
                else if(!a.empty()) {
                    ans[i] = 1;
                    ans[a.back()] = 1;
                    a.pop_back();
                }
            }
        }

        if(count(ans.begin(), ans.end(), 2))
            cout << 2 << '\n';
        else cout << 1 << '\n';

        for(ll i = 0; i < n; i++) {
            cout << ans[i] << ' ';
        }
        cout << '\n';
    }
}


