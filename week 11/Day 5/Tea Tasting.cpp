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

int main()
{
    optimize();
    ll t; cin >> t;
    while(t--) {
        ll n; cin >> n;
        vector<ll> a(n), b(n), ans(n, 0);
        multiset<ll> s;

        for(ll i = 0; i < n; i++) cin >> a[i];
        for(ll i = 0; i < n; i++) cin >> b[i];

        ll sum = 0;
        for(ll i = 0; i < n; i++) {
            s.insert(a[i] - sum);

            while(!s.empty() && *s.begin()+sum <= b[i]) {
                ans[i] += *s.begin() + sum;
                //cout << ans[i] << ' '<< *s.begin() << ' '<< sum << ' ';
                s.erase(s.begin());
            }

            ans[i] += s.size()*b[i];
            sum -= b[i];
            //cout << ans[i] << ' '<< sum << '\n';
        }

        for(auto it : ans) cout << it << ' ';
        cout << '\n';
    }
}
