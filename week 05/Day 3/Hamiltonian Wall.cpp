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
        vector<char>a[2];
        vector<ll> v(n, -1);

        for(ll i = 0; i < 2; i++) {
            for(ll j = 0; j < n; j++) {
                char m; cin >> m;
                a[i].push_back(m);
            }
        }

        for(ll i = 0; i < n; i++) {
            if(a[0][i]=='B' && a[1][i] == 'B') v[i] = 2;
            else if(a[0][i] == 'B') v[i] = 0;
            else if(a[1][i] == 'B') v[i] = 1;
        }

        bool ok = true;;
        ll p = -1, cnt = 0;

        for(ll i = 0; i < n; i++) {
            if(v[i] == 1 || v[i] == 0) {
                if(p == -1) p = v[i];
                else {
                    if(cnt%2 && p == v[i]) ok = false;
                    else if(cnt%2==0 && p != v[i]) ok = false;
                    p = v[i];
                }
               cnt = 0;
            }
            else if(v[i] == 2) cnt++;
        }

        if(ok) cout << "YES\n";
        else cout << "NO\n";
    }
}



