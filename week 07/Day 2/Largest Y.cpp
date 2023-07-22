#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
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
        ll n, x; cin >> n >> x;
        set<ll> s;
        vector <ll> a(n), bits(32, 0);

        for(ll i = 0; i < n; i++) {
            cin >> a[i];
            s.insert(a[i] | x);

            for(ll j = 0; j <= 31; j++) {
                if(a[i]&(1<<j)) bits[j]++;
            }
        }

        if(s.size() >= 2) cout << x << '\n';
        else {
            ll ans = 0, d, b;
            for(ll i = 0; (1<<i)-1 <= x; i++) {
                if((x&(1<<i)) && bits[i] >0 && bits[i] <  n) {
                    d = (1 << i);
                    b = d - 1;
                    ans = max(ans, x^d|b);
                }
            }
            cout << ans << '\n';
        }
    }
}


