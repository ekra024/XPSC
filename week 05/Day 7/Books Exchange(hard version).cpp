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
        vector<ll>v(n), ans(n, -1);

        for(ll i = 0; i< n; i++) {
            cin >> v[i];
            --v[i];
        }

        for(ll i = 0;i < n; i++) {
            if(ans[i] == -1) {
                ans[i] = 1;
                for(ll j = v[i]; j != i; j = v[j]) {
                    ans[i]++;
                }
                for(ll j = v[i]; j != i; j= v[j]) {
                    ans[j] = ans[i];
                }
            }
        }

        for(ll i = 0; i < n; i++) {
            cout << ans[i] << ' ';
        }
        cout << '\n';
    }
}



