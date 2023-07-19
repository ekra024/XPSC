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
        vector<ll>a(n);

        for(ll i = 0; i < n; i++) cin >> a[i];

        bool even = false, odd = false;
        ll e = 0, o = 0, ans = -1, ev, ov;

        for(ll i = n-1; i >= 0; i--) {
            if(a[i]%2 && even && ev%a[i] != 0) {
                ans = (i+1) + o;
                break;
            }
            else if(a[i]%2==0 && odd && ov%a[i] != 0) {
                ans = (i+1) + e;
                break;
            }
            else if(a[i]%2 && !odd) {
                odd = true;
                o = i+1;
                ov = a[i];
            }
            else if(a[i]%2==0 && !even) {
                even = true;
                e = i+1;
                ev = a[i];
            }
        }

        cout << ans << '\n';
    }
}



