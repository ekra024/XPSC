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
        vector<ll>a(n), b(n),mx, mn;

        for(ll i = 0; i < n; i++) cin >> a[i];
        for(ll i = 0; i < n; i++) cin >> b[i];

        ll ind = 0;

        for(ll i = 0; i < n; i++) {
            ll res = b[ind] - a[i];
            while(res < 0 && ind < n) {
                ind++; res = b[ind] - a[i];
            }
            mn.push_back(res);

        }

        ll idx = n-1;
        for(ll i = n-1; i >= 0; i--) {
            ll res = b[idx] - a[i];
            if(a[i] > b[i-1]) idx = i-1;
            mx.push_back(res);
        }

        for(auto it : mn) cout << it << ' ';
        cout << '\n';
        reverse(mx.begin(), mx.end());
        for(auto it : mx) cout << it << ' ';
        cout << '\n';

    }
}

