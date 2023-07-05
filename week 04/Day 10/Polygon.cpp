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
        vector<string>v;
        bool ok = true;

        for(ll i = 0; i < n; i++) {
            string s; cin >> s;
            v.push_back(s);
        }

        for(ll i = 0; i < n-1; i++) {
            string g = v[i],q = v[i+1];
            //cout << g << ' ' << p << ' '<< q << '\n';
            for(ll j = 0; j < n-1; j++) {
                if(g[j] == '1' && g[j+1]=='0' && q[j] == '0') {
                    ok = false;break;
                }
            }
            if(!ok) break;
        }

        if(ok) cout << "YES\n";
        else cout << "NO\n";
    }
}



