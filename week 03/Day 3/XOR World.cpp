#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define all(x) (x).begin(), (x).end()
#define gcd(a,b)  __gcd(a,b)
#define lcm(a,b) (a*b)/__gcd(a,b)
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
const int N=1e5;
int hsh[N];

ll fun(ll n)
{
    if(n%4 == 0) return n;
    if(n%4 == 1) return 1;
    if(n%4 == 2) return n+1;
    return 0;
}

int main()
{
    optimize();
    ll a, b; cin >> a >> b;
    if(a > 0) a= a-1;
    ll ans = fun(b) ^ fun(a);


   cout << ans << '\n';
}


