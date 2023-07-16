#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define all(x) (x).begin(), (x).end()
#define gcd(a,b)  __gcd(a,b)
#define lcm(a,b) (a*b)/__gcd(a,b)
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
const int N=1e5 + 5;
int h[N];
int dp[N],mx = 1e5;

int stone(int n)
{
    if(n == 1) return 0;
    if(dp[n] != -1) {
      return dp[n];
    }
    int ans1 = stone(n-1) + abs(h[n] - h[n-1]);

    if(n == 2) {
        dp[n] = ans1;
        return ans1;
    }
    int ans2 = stone(n-2) + abs(h[n] - h[n-2]);

    int ans = min(ans1, ans2);
    dp[n] = ans;

    return ans;
}

int main()
{
    optimize();
    ll n; cin >> n;

    for(int i = 1; i <= n; i++) {
        cin >> h[i];
    }
    memset(dp, - 1, sizeof(dp));

    cout << stone(n) << '\n';
}


