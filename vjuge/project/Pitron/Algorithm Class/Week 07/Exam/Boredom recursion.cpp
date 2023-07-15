#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

const int N = 1e5 + 5;
int a[N];
ll dp[N];

ll boredom(ll n)
{
    if (n < 2)
        return a[n];

    if (dp[n] != -1)
        return dp[n];

    return dp[n] = max(boredom(n - 1), boredom(n - 2) + a[n] * n);
}

int main()
{
    ll n;
    cin >> n;

    ll x, mx = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        a[x]++;
        mx = max(mx, x);
    }

   memset(dp , -1 , sizeof(dp));

    cout << boredom(mx) << '\n';
    return 0;
}
