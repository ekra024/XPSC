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
        vector<ll> a(n);

        for(ll i = 0; i < n; i++) cin >> a[i];

        bool ok = false;

        for(ll i = 0; i < n-2; i++) {
            for(ll j = i+1; j < n-1; j++) {
                for(ll k = j+1; k < n; k++) {
                    if((a[j]- a[i]) == (a[k] - a[j])) {
                        ok = true; break;
                    }
                }
            }
        }

        if(ok) cout << "No\n";
        else cout << "Yes\n";
    }
}



