#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define all(x) (x).begin(), (x).end()
#define gcd(a,b)  __gcd(a,b)
#define lcm(a,b) (a*b)/__gcd(a,b)
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
const int N=1e5;
int hsh[N];
int dp[N];

int Tribonnaci(int n)
{
    if(n <= 3) return 1;

    if(dp[n] != -1) {
        return dp[n];
    }

    dp[n] = Tribonnaci(n-1) + Tribonnaci(n-2) + Tribonnaci(n-3);

    return dp[n];
}

int main()
{
    optimize();
    ll n; cin >> n;
    memset(dp , -1 , sizeof(dp));

    cout << Tribonnaci(n);
}


