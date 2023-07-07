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
        ll n, l, r;
        cin >> n >> l >> r;
        vector<ll>a(n);
        for(ll i = 0; i < n; i++) cin >> a[i];

        sort(a.begin(), a.end());
        ll ans = 0;

        for(ll i = 0; i < n-1; i++) {
            ll x = l - a[i];
            ll y = r - a[i];
            auto it = lower_bound(a.begin()+i+1, a.end(), x);
            auto it2 = upper_bound(a.begin()+i+1, a.end(), y);
            ans += (it2-it);
        }

        cout << ans << '\n';
    }
}



