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
        vector<pair<ll, ll> > v(n);
        vector<ll>differ;

        for(ll i = 0; i < n; i++) cin >>v[i].second;
        for(ll i = 0; i < n; i++) cin >> v[i].first;

        for(ll i = 0; i < n; i++) {
            ll a = v[i].first - v[i].second;
            differ.push_back(a);
        }

        sort(differ.rbegin(), differ.rend());

        ll l = 0, r = n-1, ans = 0, cnt = 0, burle = 0, cost = 0;

        while(l < r) {
            if(differ[l] + differ[r] >= 0) {
                ans++;
                l++;
                r--;
            }
            else r--;
        }

        cout << ans << '\n';
    }
}



