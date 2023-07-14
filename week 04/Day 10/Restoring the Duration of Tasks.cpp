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
        vector<pair<ll,ll> > v(n);
        vector<ll> ans;

        for(ll i = 0; i < n; i++) cin >> v[i].first;
        for(ll i = 0; i < n; i++) cin >> v[i].second;

        ans.push_back(v[0].second - v[0].first);

        for(ll i = 1; i < n; i++) {
            ll r = v[i].second - (max(v[i].first, v[i-1].second));
            ans.push_back(r);
        }

        for(auto it : ans) cout << it << ' ';
        cout << '\n';

    }
}



