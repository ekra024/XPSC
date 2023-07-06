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
        ll n, m; cin >> n >> m;
        vector<ll>a(n),p(m);
        for(ll i = 0; i < n; i++) cin >> a[i];
        for(ll i = 0; i < m; i++) cin >> p[i];
        bool ok = true;

        while(ok) {
            ok = false;
            for(ll i = 0; i < m; i++) {
                if(i+1 >= n) continue;
                ll idx = p[i] - 1;
                if(a[idx] > a[idx+1]) {
                    swap(a[idx] , a[idx+1]);
                    ok = true;
                }
            }
        }

        if(is_sorted(a.begin(), a.end()))
            cout << "YES\n";
        else cout << "NO\n";
    }
}



