#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define all(x) (x).begin(), (x).end()
#define gcd(a,b)  __gcd(a,b)
#define lcm(a,b) (a*b)/__gcd(a,b)
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
const int N=1e5;
int hsh[N];
int a[N];
int dp[N];

int MinCost(int n)
{
    if(n == 0) return 0;
    if(dp[n] != 0) {
      return dp[n];
    }
    int ans1 = MinCost(n-1) + a[n-1];
    if(n == 1) {
        dp[n] = ans1;
        return ans1;
    }
    int ans2 = MinCost(n-2) + a[n-2];

    int ans = min(ans1, ans2);
    dp[n] = ans;

    return ans;
}

int main()
{
    optimize();
    ll n; cin >> n;

    for(int i = 0; i < n; i++ ) cin >> a[i];

    cout << MinCost(n) << '\n';
}


