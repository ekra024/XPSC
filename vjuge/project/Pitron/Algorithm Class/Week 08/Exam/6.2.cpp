#include <bits/stdc++.h>
using namespace std;
const int N = 1005;

int n;
int grid[N][N];
pair<int, int> queen, des, king;

bool visited[N][N];

int dx[] = {-1, 0, -1, 1, -1, 1, 0, 1};
int dy[] = {-1, -1, 0, -1, 1, 0, 1, 1};

bool safe(pair<int, int> A)
{
    if (A.first > 0 && A.first <= n && A.second > 0 && A.second <= n && grid[A.first][A.second] != -1)
        return true;
    return false;
}

bool bfs()
{
    queue<pair<int, int>> q;
    visited[king.first][king.second] = true;
    q.push(king);

    while (q.size())
    {
        int x = q.front().first;
        int y = q.front().second;
        q.pop();

        for (int i = 0; i < 8; i++)
        {
            if (safe({x + dy[i], y + dx[i]}) && !visited[x + dy[i]][y + dx[i]])
            {
                if ((x + dy[i]) == des.first && y + dx[i] == des.second)
                    return true;

                visited[x + dy[i]][y + dx[i]] = true;
                q.push({x + dy[i], y + dx[i]});
            }
        }
    }
    return false;
}

void unsafe()
{
    for (int i = 1; i <= n; i++)
    {
        grid[queen.first][i] = -1;
        grid[i][queen.second] = -1;
    }
    for (int i = queen.first, j = queen.second; i > 0 && j > 0; i--, j--)
        grid[i][j] = -1;
    for (int i = queen.first, j = queen.second; i <= n && j <= n; i++, j++)
        grid[i][j] = -1;
    for (int i = queen.first, j = queen.second; i > 0 && j <= n; i--, j++)
        grid[i][j] = -1;
    for (int i = queen.first, j = queen.second; i <= n && j > 0; i++, j--)
        grid[i][j] = -1;
}

int main()
{


    cin >> n;

    cin >> queen.first >> queen.second;
    cin >> king.first >> king.second;
    cin >> des.first >> des.second;

    unsafe();

    if (bfs())
        cout << "YES\n";
    else
        cout << "NO\n";

}
