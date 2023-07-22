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
        ll a = 1, b = 2, c, d;
        bool ok = false;

        for(ll i = 3; i <= (1e5); i++) {
            d = i ^ n;
            if(d > 2 && d != i) {
                d = i ^ n;
                c = i;
                ok = true;
                break;
            }
        }

        if(n == 0) cout << "4 6 3 7\n";
        else if(ok)
            cout << a << ' ' << b << ' ' << c << ' ' << d << '\n';
        else cout << -1 << '\n';
    }
}

