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
        ll n, m; cin >> n >> m;
        vector<ll> a(n), d(n, 0);
        ll mnPair = INT_MAX, ans = 0;

        for(ll i = 0; i < n; i++) cin >> a[i];

        for(ll i = 0; i < m; i++) {
            ll x , y; cin >> x >> y;
            d[x-1]++;
            d[y-1]++;
            mnPair = min(mnPair, a[x-1]+a[y-1]);
        }

        if(m%2==0) ans = 0;
        else {
            ans = mnPair;

            for(ll i = 0; i < n; i++) {
                if(d[i]%2 != 0) {
                    ans = min(ans, a[i]);
                }
            }
        }

        cout << ans << '\n';

    }
}


