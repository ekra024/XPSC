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
    ll t=1;// cin >> t;
    while(t--) {
        ll n, s;
        cin >> n >> s;
        vector<ll> v(n);
        for(int i = 0; i < n; i++) cin >> v[i];

        ll sum = 0, ans = , l = 0, r = 0;

        while(r < n) {
            sum += v[r];
            r++;
            ll t = sum;
            if(sum > s) {
                sum -= v[l];
                l++;
            }
            if(sum <= s) {
                ans = max(ans,(r-l));
            }

        }

        cout << ans << '\n';
    }
}


