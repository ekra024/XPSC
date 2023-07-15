#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
const int N = 1005;
bool visited[N][N];
int dx[8] = { 1,0,-1,0,-1,1,-1,1 };
int dy[8] = { 0,1,0,-1,-1,1,1,-1 };
int n;
void dfs(int x, int y)
{
    visited[x][y] = true;
    for (int i = 0; i < 8; i++)
    {
        int x1, y1;
        x1 = dx[i] + x;
        y1 = dy[i] + y;
        if (!visited[x1][y1] && x1 >= 1 && y1 >= 1 && x1 <= n && y1 <= n)
        {
            visited[x1][y1] = true;
            dfs(x1, y1);
        }
    }
}
void solve()
{
    int ax, ay, bx, by, cx, cy;
    cin >> n;
    cin >> ax >> ay;
    cin >> bx >> by;
    cin >> cx >> cy;
    for (int i = 0; i < 8; i++)
    {
        int x, y;
        x = dx[i] + ax;
        y = dy[i] + ay;
        while (x <= n && y <= n && x >= 1 && y >= 1)
        {
            visited[x][y] = true;
            x += dx[i];
            y += dy[i];
        }
    }
    dfs(bx, by);
    cout << (visited[cx][cy] ? "YES" : "NO") << '\n';
}
int main()
{
    solve();
}
