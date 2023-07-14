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
        ll n; cin >> n;
        vector<ll>a(n), b(n), diff, same;

        for(ll i = 0; i < n; i++) cin >> a[i];
        for(ll i = 0; i < n; i++) cin >> b[i];

        bool ok = true;
        ll mx = 0;

        for(ll i = 0; i < n; i++) {
            if(b[i] > a[i]) {
                ok = false;break;
            }
            mx = max(mx, a[i]-b[i]);
        }

        for(ll i = 0; i < n; i++) {
            if(b[i] && a[i]-b[i]!= mx)
                ok = false;
        }

        if(ok) cout << "YES\n";
        else cout << "NO\n";
    }
}

