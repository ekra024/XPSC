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
        ll n, l, r, ans = 0;
        cin >> n >> l >> r;
        vector<ll> v(n);

        for(ll i = 0; i < n; i++) cin >> v[i];

        sort(v.begin(), v.end());

        for(ll i = 0; i < n-1; i++) {

            auto it1 = lower_bound(v.begin()+i+1, v.end(), l - v[i]);
            auto it2 = upper_bound(v.begin()+i+1, v.end(), r - v[i]);

            ans += (it2 - it1);
        }


        cout << ans << '\n';
    }
}



