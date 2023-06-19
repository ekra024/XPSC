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
        vector<ll>v[n+1], ans(n);

        for(ll i = 0; i < n; i++) {
            for(ll j = 0; j < n-1; j++) {
                int a; cin >> a;
                v[a].push_back(j);
            }
        }

        for(int i = 1; i <= n; i++) {
            vector<ll>given = v[i];
            ll mx = *max_element(given.begin(), given.end());
            ll mn = *min_element(given.begin(),given.end());
            if(mx == mn && mx == n-2) ans[n-1] = i;
            else ans[mx] = i;
        }

        for(auto it : ans) cout << it << ' ';
        cout << '\n';
    }
}

