#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N = 1000;
const ll mod = 1e9+7;

char c[N+1][N+1];
ll dp[N+1][N+1];

int main(){
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++)
        for(int j = 1; j <= n; j++)
            cin >> c[i][j];

    dp[1][1] = (c[1][1] == '.');
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            if(c[i][j] == '.'){
                if(c[i-1][j] == '.')    dp[i][j] += dp[i-1][j];
                if(c[i][j-1] == '.')    dp[i][j] += dp[i][j-1];
                dp[i][j] %= mod;
            }
        }
    }

   cout << dp[n][n] << '\n';
}
