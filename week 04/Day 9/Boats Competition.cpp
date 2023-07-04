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
        map<ll, ll> mp;

        for(ll i = 0; i < n; i++) {
            int a; cin >> a;
            mp[a]++;
        }

        ll ans = 0;

        for(ll i = 1; i <= 100; i++) {
            ll num = i, res = 0;
            for(auto it : mp) {
                ll r = num - it.first;
                if(mp.find(r) != mp.end() && r >= 1) {
                    res += min(it.second, mp[r]);
                }

            }
            res /= 2;
            ans = max(ans, res);
        }

        cout << ans << '\n';
    }
}

