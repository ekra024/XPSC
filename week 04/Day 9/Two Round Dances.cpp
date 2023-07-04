#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define all(x) (x).begin(), (x).end()
#define gcd(a,b)  __gcd(a,b)
#define lcm(a,b) (a*b)/__gcd(a,b)
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
const int N=1e5;
int hsh[N];
ll dp[20];

ll fact(ll n)
{
    if(n == 0 || n == 1) return 1;

    ll ans = n* fact(n-1);
    return ans;
}

int main()
{
    optimize();
    ll t = 1;// cin >> t;
    while(t--) {
        memset(dp, -1 , sizeof(dp));
        ll n; cin >> n;
        ll r = n/2;

        ll ans=(fact(n)/(fact(r)*fact(n-r)))/2*fact(n/2-1)*fact(n/2-1);

         cout << ans << '\n';
    }
}

