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
        ll p, q, r, s; cin >> p >> q >> r >> s;
        ll mx = max(p, max(q, max(r, s)));
        ll sum = p + q + r + s;

        if(mx > (sum - mx)) cout << "YES\n";
        else cout << "NO\n";
    }
}



