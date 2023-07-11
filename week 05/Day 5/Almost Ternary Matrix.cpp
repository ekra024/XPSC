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
        ll n, m; cin >> n >> m;

        for(ll i = 1; i <= n; i++) {
            ll r = i%4;
            if(r == 1 || r == 0) {
                for(ll j = 1; j <= m/2; j++)
                    if(j%2)cout << "1 0 ";
                    else cout << "0 1 ";
            }
            if(r == 2 || r == 3) {
                for(ll j = 1; j <= m/2; j++) {
                    if(j%2) cout << "0 1 ";
                    else cout << "1 0 ";
                }
            }

            cout << '\n';
        }

    }
}



