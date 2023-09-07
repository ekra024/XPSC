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
        ll n, h; cin >> n >> h;
        vector<ll> v(n);

        for(auto &x : v) cin >> x;
        ll l = 1 , r = 1e18;

        while(l <= r) {
            ll mid = l + (r-l)/2;
            ll sum = mid;

            for(int i = 0; i < n-1; i++) {
                sum += min(mid, v[i+1] - v[i]);
            }

            //cout << mid << ' ' << sum << ' ' << h << '\n';

            if(sum < h) l = mid + 1;
            else r = mid - 1;

            //cout << l << ' ' << r << '\n';
        }

        cout << r + 1 << '\n';
    }
}

