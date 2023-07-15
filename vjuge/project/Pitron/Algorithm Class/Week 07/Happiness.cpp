#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 5;
int happiness[N][4], dp[N][4];


int fun(int day, int task_no)
{
    if(day == 1) {
        return happiness[day][task_no];
    }

    if(dp[day][task_no] != -1) {
        return dp[day][task_no];
    }

    int mx_profit = 0;

    for(int i = 1; i <= 3; i++) {
        if(i != task_no) {
            int profit = fun(day-1, i) + happiness[day][task_no];
            mx_profit = max(mx_profit, profit);
        }
    }

    dp[day][task_no] = mx_profit;
    return mx_profit;
}

int main()
{
    int n; cin >> n;

    for(int i = 1; i <= n; i++) {
//        int a, b , c;
//        cin >> a >> b >> c;
//        happiness[i][1] = a;
//        happiness[i][2] = b;
//        happiness[i][3] = c;
        for(int j = 1; j <= 3; j++) {
            cin >> happiness[i][j];
        }
    }

    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= 3; j++) {
            dp[i][j] = -1;
        }
    }

    int ans1 = fun(n,1);
    int ans2 = fun(n,2);
    int ans3 = fun(n,3);

    cout << max({ans1, ans2, ans3}) << '\n';
}
