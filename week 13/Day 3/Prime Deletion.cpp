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

void solve()
{
    string s; cin >> s;
    bool one = false, three = false;

    for(ll i = 0; i < s.size(); i++) {
        if(s[i] == '1') one = true;
        if(s[i] == '3') three = true;
        if(s[i] == '1' && three) {
            cout << 31 << '\n';
            return;
        }
        if(s[i] == '3' && one) {
            cout << 13 << '\n';
            return;
        }
    }

    cout << -1 << '\n';
}

int main()
{
    optimize();
    ll t; cin >> t;
    while(t--) {
       solve();
    }
}


