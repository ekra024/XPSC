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
        vector<ll>a(n);
        ll gcd1 = 0, gcd2 = 0;

        for(ll i = 0; i < n; i++) {
            cin >> a[i];
            if(i&1) gcd1 = gcd(gcd1, a[i]);
            else gcd2 = gcd(gcd2, a[i]);
        }

        bool ok1 = true, ok2 = true;

        for(ll i = 0; i < n; i+=2) {
            if(a[i]%gcd1 == 0) ok1 = false;
        }

        for(ll i = 1; i < n; i+=2) {
            if(a[i]%gcd2 == 0) ok2 = false;
        }

        if(ok1) cout << gcd1 << '\n';
        else if(ok2) cout << gcd2 << '\n';
        else cout << 0 << '\n';
    }
}


