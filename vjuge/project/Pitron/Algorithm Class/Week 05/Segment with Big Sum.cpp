#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define all(x) (x).begin(), (x).end()
#define gcd(a,b)  __gcd(a,b)
#define lcm(a,b) (a*b)/__gcd(a,b)
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
const int N=1e5;
const int INF = 1e18;
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

        ll sum = 0, ans = INF, l = 0, r = 0;

        while(1) {
            if(sum < s) {
                sum += v[r];
                r++;
                if(r > n) break;
            }

            if(sum >= s) {
                ans = min(ans,(r-l));
                sum -= v[l];
                l++;
            }

        }

        cout << ans << '\n';
    }
}
