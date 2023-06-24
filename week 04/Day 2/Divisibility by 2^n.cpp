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
        ll power = 0;
        vector<ll>v;

        for(ll i = 0; i < n; i++) {
            int a; cin >> a;
            while(a%2 == 0) {
                a/=2;
                power++;
            }
        }

        for(ll i = 1; i <= n; i++) {
            ll temp = i, cnt = 0;
            while(temp%2 == 0) {
                temp/=2;
                cnt++;
            }
            v.push_back(cnt);
        }

        sort(v.rbegin(), v.rend());
        ll ans = 0;
        bool ok = false;

        if(power >= n) {
            ok = true;
        }

        for(ll i = 0; i < v.size(); i++) {
            if(power >= n) {
                ok = true;
                break;
            }
            power += v[i];
            ans++;
        }

        if(ok)cout << ans << '\n';
        else cout << -1 << '\n';
    }
}

