#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define gcd(a,b)  __gcd(a,b)
#define lcm(a,b) (a*b)/__gcd(a,b)
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int mod = 1e9 + 7;
const int N=1e4 + 5;

int main()
{
    optimize();
    ll t; cin >> t;
    while(t--) {
        ll n; cin >> n;
        vector<ll>a(n+1, 0), d(n), ans(n+1, 0);
        bool ok = true;

        for(ll i = 0; i < n; i++) {
            cin >> d[i];
        }

        ans[0] = d[0];

        for(ll i = 1; i < n; i++) {
            ll r = ans[i-1] - d[i];

            if(d[i] && r >= 0) {
                ok = false;break;
            }
            else {
                ans[i] = ans[i-1] + d[i];
            }

        }

        if(!ok) cout << -1;
        else {
            for(ll i = 0; i < n; i++)
                cout << ans[i] << ' ';
        }
        cout << '\n';
    }
}



