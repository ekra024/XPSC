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
        vector<ll>v(1001, -1);

        for(ll i = 0; i < n; i++) {
            int a; cin >> a;
            v[a] = i+1;
        }

        ll ans = -1;

//        for(auto it : v) {
//            cout << it << ' ';
//        }
//        cout << '\n';

        for(ll i = 1; i <= 1000; i++) {
            for(ll j = 1; j <= 1000; j++) {
                if(v[i] >= 1 && v[j] >= 1 && (gcd(i, j) == 1)){
                      ans = max(ans, (v[i]+v[j]));
                }
            }
        }

        cout << ans << '\n';
    }
}


