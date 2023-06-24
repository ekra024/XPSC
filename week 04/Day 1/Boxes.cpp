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
        ll n, mx = 0; cin >> n;
        vector<ll>v(n);
        map<ll,ll>mp;

        for(ll i = 0; i < n;i++) {
            cin >> v[i];
            if(v[i] & 1) v[i]--;
        }

        sort(v.begin(), v.end());
        ll last;

        for(ll i = 0; i < n; i++) {
            ll ans = 0;
            while(v[i] > 1) {
                ans++;
                v[i]/=2;
            }
            mp[ans]++;
            mx = max(mx, ans);
        }

        ll finalAns = ceil(mp[mx]*1.0 /2);

        cout << finalAns << '\n';
    }
}


