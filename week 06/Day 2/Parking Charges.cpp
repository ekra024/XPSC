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
    ll t = 1;// cin >> t;
    while(t--) {
        ll x, y, h; cin >> x >> y >> h;
        ll pay = x + (h-1)*y;

        cout << pay << '\n';
    }
}



