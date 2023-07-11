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
        bool ok = true, can = true;

        for(ll i = 0; i < n; i++) cin >> a[i];

        if(a[n-2] > a[n-1]) ok = false;

        if(ok) {
            if(a[n-1] >= 0) {
                cout << n-2 << '\n';
                for(ll i = 0; i < n-2; i++) {
                    cout << i+1 << ' '<< n-1 << ' '<<n << '\n';
                }
            }
            else if(is_sorted(a.begin(), a.end()))
                cout << 0 << '\n';
            else cout << -1 << '\n';
        }
        else cout << -1 << '\n';
    }
}



