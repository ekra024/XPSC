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
        vector<ll>a(n);

        for(ll i = 0; i < n; i++) cin >> a[i];

        ll score = abs(a[0] - a[1]);

        for(ll i = 1; i < n; i++) {
            if(i == n-1) {
                score = min(score, abs(a[i]-a[i-1]));
                break;
            }
            ll r1 = abs(a[i-1] - a[i]);
            ll r2 = abs(a[i+1] - a[i]);
            score = min(score, max(r1, r2));
        }

        cout << score << '\n';
    }
}



