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
        ll in = 0, de = 0,ans = 0;

        ll r = n - 50;
        ll l = 50 - n;

        if(n > 50) {
            if(r%3==1) ans = (r/3)+2;
            else if(r%3==2) ans = (r/3)+4;
            else ans = r/3;
        }
        else if(n < 50) {
            if(l%2 == 1) ans = (l/2)+3;
            else ans = l/2;

        }
        else ans = 0;

        cout <<ans << '\n';

    }
}


