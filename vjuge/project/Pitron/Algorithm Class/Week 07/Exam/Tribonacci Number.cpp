#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

const int N = 1e5 + 5;
ll dp[N];

int main()
{
    ll n; cin >> n;
    memset(dp , -1 , sizeof(dp));

    dp[0] = 0;
    dp[1] = 1;
    dp[2] = 1;

    for(int i = 3; i <= n; i++) {
        dp[i] = dp[i-1] + dp[i-2] + dp[i-3];
    }

    cout << dp[n] << '\n';
}
