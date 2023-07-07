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
        ll n, k; cin >> n >> k;
        map<ll, pair<ll, ll> > mp;

        for(ll i = 1; i <= n; i++) {
            int a; cin >> a;
            if(!mp.count(a)) {
                mp[a].first = i;
                mp[a].second = i;
            }
            else mp[a].second = i;
        }

        while(k--) {
            ll p, q; cin >> p >> q;
            if(mp.count(p) && mp.count(q) && mp[q].second > mp[p].first)
                cout << "YES\n";
            else cout << "NO\n";
        }
    }
}



