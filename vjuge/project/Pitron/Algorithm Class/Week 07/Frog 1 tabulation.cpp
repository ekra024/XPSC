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


int main()
{
    optimize();
    ll n; cin >> n;

    for(int i = 1; i <= n; i++) {
        cin >> h[i];
    }
    dp[1] = 0;

    for(int i = 2; i <= n; i++) {
        int ans1 = dp[i-1] + abs(h[n] - h[n-1]);

        if(i == 2) {
            dp[i] = ans1;
            continue;
        }

        int ans2 = dp[n-2] + abs(h[n] - h[n-2]);
        dp[i] = min(ans1, ans2);
    }

    cout << dp[n] << '\n';
}
