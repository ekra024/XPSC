#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define all(x) (x).begin(), (x).end()
#define gcd(a,b)  __gcd(a,b)
#define lcm(a,b) (a*b)/__gcd(a,b)
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
const int N=1e5;
int hsh[N];

bool binary(ll l, ll r, double x)
{

    while(l <= r) {
        ll mid = (r-l)/2 + l;
        if(x == mid)
            return true;
        else if(x > mid) l = mid + 1;
        else if(x < mid) r = mid - 1;
    }
    return false;
}

int main()
{
    optimize();
    ll t; cin >> t;
    while(t--) {
        ll n; cin >> n;

        bool ok = false;
        for(ll i = 1; i*i*i <= n; i++) {
            double res = cbrt(n - (i*i*i));
            if(binary(1, n, res)) {
                ok = true;break;
            }
        }

        if(ok) cout << "YES\n";
        else cout << "NO\n";
    }
}



