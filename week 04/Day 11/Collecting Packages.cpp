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
        vector<pair<ll, ll> > v;
        for(ll i = 0; i < n; i++) {
            int x, y; cin >> x >> y;
            v.push_back({x, y});
        }
        sort(v.begin(), v.end());
        ll  u = 0, r = 0;
        string ans = "";
        bool ok = true;

        for(ll i = 0; i < v.size(); i++) {
            while(r < v[i].first) {
                r++; ans += 'R';
            }
            while(u < v[i].second) {
                u++; ans += 'U';
            }
            if(r != v[i].first || u != v[i].second) {
                ok = false;
                break;
            }
        }

        if(ok) cout << "YES\n" << ans << '\n';
        else cout << "NO\n";
    }
}


