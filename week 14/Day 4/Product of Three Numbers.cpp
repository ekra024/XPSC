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

        ll a = -1, b = -1, c = -1;
        bool ok = false;

        for(ll i = 2; i < sqrt(n); i++) {
            if(n%i==0 && a == -1) {
                a = i;
                n = n/i;
            }
            else if(n%i==0 && b == -1) {
                b = i;
                if(n/i != b) {
                    c = n/i;
                    break;
                }
            }
        }

        if(a != -1 && b!= -1 && c!= -1) {
            cout << "YES\n";
            cout << a << ' '<< b << ' '<< c << '\n';
        }
        else cout <<"NO\n";
    }
}


