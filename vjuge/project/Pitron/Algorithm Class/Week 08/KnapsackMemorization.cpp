#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N = 102;
const int M = 1e5 + 5;
long long dp[N][M];
ll wt[N], val[N];

long long knapsack(ll n, ll cap)
{
    if(n == 0) {
        return 0;
    }

    if(dp[n][cap] != -1) {
        return dp[n][cap];
    }

    if(cap < wt[n]) {
        ll ans = knapsack(n-1, cap);
        dp[n][cap] = ans;
        return ans;
    }

    ll ans1 = val[n] + knapsack(n-1, cap-wt[n]);
    ll ans2 = knapsack(n-1, cap);

    ll ans = max(ans1, ans2);
    dp[n][cap] = ans;

    return ans;
}

int main()
{
    ll n, cap;
    cin >> n >> cap;

    //memset(dp , -1 , sizeof(dp));

    for(int i = 1; i <= n; i++) {
        cin >> wt[i] >> val[i];
    }

    for(int i = 0; i <= n; i++) {
        for(int j = 0; j <= cap; j++) {
            dp[i][j] = -1;
        }
    }

    cout << knapsack(n, cap) <<'\n';
}
