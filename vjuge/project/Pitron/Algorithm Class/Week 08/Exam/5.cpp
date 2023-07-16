#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

const int N = 1000 + 10;
ll dp[N][N];
char gird[N][N];

ll unique_paths(ll row, ll col)
{
    if(row == 0 && col == 0)
        return 1;
    if(dp[row][col] != -1)
        return dp[row][col];
    if(gird[row][col] == '*') {
        ll ans = 0;
        dp[row][col] = 0;
        return ans;
    }

    ll ans = 0;
    if(row > 0) ans += unique_paths(row-1, col);
    if(col > 0) ans += unique_paths(row, col-1);

    dp[row][col] = ans;

    return ans;
}

int main()
{
    ll n;
    cin >> n;

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            dp[i][j] = -1;
        }
    }

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cin >> gird[i][j];
        }
    }

    if(gird[0][0] == '*' || gird[n-1][n-1] == '*') {
        cout << 0 << '\n';
        return 0;
    }

    cout << unique_paths(n-1, n-1) << '\n';
}

