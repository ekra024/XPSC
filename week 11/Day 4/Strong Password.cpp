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
        string s; cin >> s;
        int m; cin >> m;
        bool ans = true;
        string l, r; cin >> l >> r;
        int f = 0;

        for(int i = 0; i < m; i++) {
            int sec = f;
            for(char ch = l[i]; ch <= r[i]; ch++) {
                if(s.find(ch, f) == -1) {
                    ans = false;
                    break;
                }
                sec = max(sec, (int)s.find(ch,f)+1);
            }
            f = sec;
        }

        if(ans) cout << "NO\n";
        else cout << "YES\n";
    }
}


