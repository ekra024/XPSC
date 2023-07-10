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
        vector<ll>v(n);
        ll ans = 0;

        for(ll i = 0; i < n; i++) cin >> v[i];

        for(ll i = 0; i < n; i++) {
            for(ll j = i+1; j < n; j++) {
                if(v[i] >= v[j]) ans++;
            }
        }

        cout << ans << '\n';
    }
}


