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
    ll t = 1; //cin >> t;
    while(t--) {
        ll n; cin >> n;
        vector<ll>a(n), b(n), c(n);

        for(ll i = 0; i < n; i++) cin >> a[i];
        for(ll i = 0; i < n; i++) cin >> b[i];

        for(ll i = 0; i < n; i++) {
            c[i] = a[i] - b[i];
        }

        sort(c.begin(), c.end());
        ll r = n-1, ans = 0;


        for(ll i = 0; i < n; i++) {

            while(c[i]+c[r]>0 && r > 0) r--;

            ans += n - max(i+1, r+1);
        }

        cout << ans << '\n';
    }
}



