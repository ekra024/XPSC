#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N = 1e5 + 5;
ll a[N];
ll dp[N];

int main()
{

    int n;
    cin >> n;
    ll x, mx = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> x;
        a[x]++;
        mx = max(mx, x);
    }

    dp[1] = a[1];

    for (int i = 2; i <= mx; i++) {
        dp[i] = max(dp[i - 1], dp[i - 2] + a[i] * i);
    }

    cout << dp[mx] << '\n';

}
