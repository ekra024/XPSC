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

        ll sum = 0, sum2 = 0, ans = 0, sum1 = 0;

        for(ll i = 0; i < n; i++) {
            cin >> v[i];
            sum += v[i];
        }

        for(ll i = 0; i < n-1; i++) {
            sum2 += v[i];
            sum -= v[i];
            ans = max(ans, __gcd(sum, sum2));
        }

        cout << ans << '\n';
    }
}
