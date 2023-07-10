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
        ll n, k; cin >> n >> k;
        ll ans = 1;
        bool ok = false;
        if(n > k) {
            for(ll i = 1; i <= k and i*i<= n; i++) {
                if(!(n%i)) {
                    if(n/i > k) ans = n/i;
                    else {
                        ans = i; break;
                    }
                    ok = true;
                }
            }
        }
        else ok = true;

        cout << ans << '\n';
    }
}


