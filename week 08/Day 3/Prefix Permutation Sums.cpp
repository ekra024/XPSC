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
        vector<ll>a(n);
        map<ll, ll> mp;
        bool ok = true;

        for(ll i = 0; i < n-1; i++) cin >> a[i];

        ll mx = -1, f = -1, s = -1;

        if(a[0] > n) {
            mx = a[0];
        }
        else mp[a[0]]++;

        for(ll i = 0; i < n-2; i++) {
            ll diff = abs(a[i] - a[i+1]);
            if(diff <= n && mp[diff] == 0) {
                mp[diff]++;
            }
            else mx = diff;
        }

        for(ll i = 1; i <= n; i++) {
            if(mp[i] < 1 && f == -1) {
                f = i;
            }
            else if(mp[i] < 1 && s == -1) {
                s = i;
            }
            else if(mp[i] < 1) {
                ok = false;
            }
            else if(mp[i] > 1) ok = false;
        }

        if(ok) {
            if(f+s == mx) cout << "YES\n";
            else if((mx==-1 && s==-1 && f > -1))
                cout << "YES\n";
            else if(mx == -1 && s>-1 && f== -1) {
                cout << "YES\n";
            }
            else cout << "NO\n";
        }
        else cout << "NO\n";
    }
}

