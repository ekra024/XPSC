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
    ll t = 1;// cin >> t;
    while(t--) {
        ll n, m, k; cin >> n >> m >> k;
        vector<ll> a(m+1);

        ll ans = 0;

        for(ll i = 0; i < m+1; i++) cin >> a[i];
        for(ll i = 0; i < m; i++) {
            if(__builtin_popcount(a[i] ^ a[m]) <= k) ans++;
        }

        cout << ans << '\n';
    }
}



