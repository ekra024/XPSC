#include<bits/stdc++.h>
using namespace std;
const int N = 10000 + 10;
int dp[N];

int solve(int n)
{
    if(n == 0) return 0;
    if(dp[n] != -1)
        return dp[n];

    int ans = INT_MAX;

    for(int i = 1; i*i <= n; i++) {
        ans = min(ans, 1 + solve(n - (i*i)));
    }

    dp[n] = ans;

    return dp[n];
}

int main()
{
    int n;
    cin >> n;

    memset(dp , -1 , sizeof(dp));

    cout << solve(n) << '\n';
}
