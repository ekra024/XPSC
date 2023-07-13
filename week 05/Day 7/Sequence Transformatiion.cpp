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

        for(ll i = 0; i < n; i++) cin >> v[i];

        for(ll i = 0; i < n-1; i++) {
            if(v[i] == v[i+1]) continue;
            mp[v[i]] ++;

        }
        mp[v[n-1]]++;
        mp[v[0]]--;
        mp[v[n-1]]--;

        ll ans= INT_MAX;

        for(auto it : mp) {
            ans = min(ans, it.second);
        }

        cout << ans+1 << '\n';
    }
}
