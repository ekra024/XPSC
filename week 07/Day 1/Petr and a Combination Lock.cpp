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
    ll t = 1;// cin >> t;
    while(t--) {
        ll n; cin >> n;
        vector<ll> v(n);
        bool ok = false;

        for(ll i = 0; i < n; i++) cin >> v[i];

        for(ll i = 0; i < (1<<n); i++) {
            ll ans = 0;
            for(ll j = 0; j < n; j++) {
                if(i&(1<<j)) ans+=v[j];
                else ans-=v[j];
            }
            if(ans%360 == 0) ok = true;
        }

        if(ok) cout << "YES\n";
        else cout << "NO\n";
    }
}



