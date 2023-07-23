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

bool cmp(pair<ll,ll>&a, pair<ll,ll>&b)
{
    ll sum1 = a.first + a.second;
    ll sum2 = b.first + b.second;

    if(sum1 == sum2) return a.first < b.first;
    return sum1 < sum2;
}

int main()
{
    optimize();
    ll t; cin >> t;
    while(t--) {
        ll n, k; cin >> n >> k;
        vector<pair<ll, ll> > v(n);

        for(ll i = 0; i < n; i++) cin >> v[i].first;
        for(ll i = 0; i < n; i++) cin >> v[i].second;

        sort(v.begin(), v.end(), cmp);

        ll l, ans = 0, mx = 0;

        for(l = 0; l < n; l++) {
            ll s = v[l].first + v[l].second;
            if(k >= s) {
                ans++;
                mx = max(v[l].second, mx);
                k -= s;
            }
            else break;
        }

        for(;l < n;l++) {
            if(k >= v[l].first) {
                ans++; break;
            }
            else {
                ll s = k - (v[l].first + v[l].second);
                s += mx;
                if(s >= 0) {
                    ans++;break;
                }
            }

        }

        cout << ans << '\n';
    }
}


