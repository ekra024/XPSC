#include<bits/stdc++.h>
using namespace std;
const int N = 1e7;
long long dp[N];

int fib(long long n) {

    if(n <= 2) return 1;
    if(dp[n] != -1) {
        return dp[n];
    }

    long long ans = fib(n-1) + fib(n-2);
    dp[n] = ans;
    return ans;
}

int main()
{
    int n;
    cin >> n;

    memset(dp, -1, sizeof(dp));

    cout << fib(n) << '\n';
}

