#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
template <typename T> using pbds = tree<T, null_type, less<T>,
rb_tree_tag, tree_order_statistics_node_update>;

#define all(x) (x).begin(), (x).end()
#define gcd(a,b)  __gcd(a,b)
#define lcm(a,b) (a*b)/__gcd(a,b)
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int mod = 1e9 + 7;
const int N=1e5;
int hsh[N];

int main()
{
    optimize();
    ll t; cin >> t;
    while(t--) {
        int n; cin >> n;
        int one = 0, zero = 0, mid = n/2;
        bool ok = true;

        for(int i = 0; i < n; i++) {
            int a; cin >> a;
            if(a) one++;
            else zero++;
        }

        int diff = abs(one - zero) , ans = -1;

        if(n%2) ok = false;
        if(ok) {
            if(zero == one) ans = 0;
            else if(one == n && n == 2) ans = -1;
            else if(zero > one && one >= 1) ans = mid - one;
            else if(one > zero) {
                ll val = mid - zero;
                if(val%2) ans = ((val+1)/2) + 1;
                else ans = val/2;
            }
        }

        cout << ans << '\n';
    }
}



