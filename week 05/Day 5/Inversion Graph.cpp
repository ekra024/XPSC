#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define all(x) (x).begin(), (x).end()
#define gcd(a,b)  __gcd(a,b)
#define lcm(a,b) (a*b)/__gcd(a,b)
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
const int N=1e5;
int hsh[N];

int main()
{
    optimize();
    ll t; cin >> t;
    while(t--) {
        ll n; cin >> n;
        vector<ll>v(n);

        for(ll i = 0; i < n; i++) cin >> v[i];

        ll ans = 0, mx = 0;

        for(ll i = 0; i < n; i++) {
            mx = max(mx, v[i]);

            if(mx == i+1) ans++;
        }

        cout << ans << '\n';
    }
}



