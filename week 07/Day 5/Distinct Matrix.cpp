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
        bool ok = true;
        vector<ll>v;
        if(n < 3) ok = false;
        if(ok) {
            for(ll i = 1; i <= n-1; i++) {
                for(ll j = 1; j <= n; j++) {
                    if(i == j) v.push_back(0);
                    else v.push_back(1);
                }
            }

            for(ll i = 1; i <= n; i++) {
                v.push_back(0);
            }
        }
        if(ok) {
        ll cnt = 0;
        for(auto it : v) {
            cnt++;
            cout << it;
            if(cnt==n) {
                cnt=0;
                cout << '\n';
            }
        }
        }
        else cout << -1 << '\n';
    }
}


