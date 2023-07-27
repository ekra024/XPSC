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
        ll t;
        if(n%2) {
            t = n-1;
        }
        else t = n-2;

        ll num = (t/2);
        ll ans = ((num*2)-1) + (num*1);

        if(n == 1) cout << 0 <<  '\n';
        else if(n%2) cout << ans << '\n';
        else cout << ans + 1 << '\n';
    }
}


