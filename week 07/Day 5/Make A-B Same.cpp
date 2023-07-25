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
        ll n, cnt = 0; cin >> n;
        vector<pair<ll,ll> > v(n);
        bool possible = false, ok = true;

        for(ll i = 0; i < n; i++) {
            cin >> v[i].first;
            if(v[i].first == 1) possible = true;
        }
        for(ll i = 0; i < n; i++) cin >> v[i].second;

        for(auto it : v) {
            cnt++;
            if(it.first != it.second && (cnt == 1 || cnt == n)) {
                ok = false; break;
            }
            else if(it.first != it.second) {
                if(it.first > it.second) {
                    ok = false; break;
                }
                else if(possible) {
                    continue;
                }
                else {
                    ok = false; break;
                }
            }
        }

        if(ok) cout << "YES\n";
        else cout << "NO\n";
    }
}



