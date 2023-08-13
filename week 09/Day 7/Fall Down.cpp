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
        ll n, m; cin >> n >> m;
        char ch[n+5][m+5];

        for(ll i = 0; i < n; i++) {
            for(ll j = 0; j < m; j++)
                cin >> ch[i][j];
        }

        for(ll j = 0; j < m; j++) {
            ll last = n-1;
            for(ll i = n-1; i >= 0; i--) {
                if(ch[i][j] == 'o') last = i - 1;
                else if(ch[i][j] == '*') {
                    swap(ch[i][j], ch[last][j]);
                    last--;
                }
            }
        }

        for(ll i = 0; i < n; i++) {
            for(ll j = 0; j < m; j++) {
                cout << ch[i][j];
            }
            cout << '\n';
        }
    }
}


