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
    ll t = 1;// cin >> t;
    while(t--) {
        ll n; cin >> n;
        vector<ll> a(n+1);
        ll odd = 0, even = 0, curOdd = 0, curEven = 0, cOdd = 0, cEven = 0;

        for(ll i = 1; i <= n; i++) {
            cin >> a[i];
            if(i & 1) odd += a[i];
            else even += a[i];
        }

        ll cnt = 0;

        for(ll i = 1; i <= n; i++) {
            if(i & 1) {
                curOdd = even + cOdd - cEven;
                curEven = odd - a[i] - cOdd + cEven;
                if(curOdd == curEven) cnt++;
                cOdd += a[i];
            }
            else {
               curOdd = even - a[i] + cOdd - cEven;
               curEven = odd + cEven - cOdd;


               if(curOdd == curEven) cnt++;
               cEven += a[i];
            }
        }

        cout << cnt << '\n';
    }
}



