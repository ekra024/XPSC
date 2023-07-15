#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 5;
int dp[N];

int solve(int i, vector<int>&nums, int n)
{
    if(n < i) return 0;
    if(n == 0) return nums[n];

    if(dp[n] != -1)
        return dp[n];

    int ans1 = solve(i , nums , n-2 ) + nums[n];
    int ans2 = solve(i , nums , n-1);

    int ans = max(ans1, ans2);

    dp[n] = ans;

    return dp[n];
}

int main()
{
    int n;
    cin >> n;

    vector<int> a(n);

    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    if(n == 1) {
        cout << a[0] << '\n';
        return 0;
    }

    memset(dp , -1 , sizeof(dp));

    int res1 = solve(0 , a , n- 2);
    int res2 = solve(1, a , n - 1);

    cout << max(res1, res2) << '\n';
}
