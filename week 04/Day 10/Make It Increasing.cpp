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
        vector<ll>v(n);

        for(ll i = 0; i < n; i++) cin >> v[i];

        ll moved = 0;
        bool ok = true;

        for(ll i = n-1; i >= 1; i--) {
            if(v[i] < i) {
                ok = false;break;
            }
            if(v[i] <= v[i-1]) {
                while(v[i-1] >= v[i]) {
                    v[i-1] /= 2;
                    moved++;
                }
            }

        }

        if(ok)
            cout << moved << '\n';
        else cout << -1 << '\n';

    }
}


