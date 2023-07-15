#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define all(x) (x).begin(), (x).end()
#define gcd(a,b)  __gcd(a,b)
#define lcm(a,b) (a*b)/__gcd(a,b)
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
const int N = 1e3 + 10;
const int INF = 1e9;

//vector<int>adj_list[N];
int adj_Mtx[N][N];
int gird[N][N];
bool visited[N][N];
int n, m;
int LongRoom, Room = 0, mx;

int dx[4] = {1 , -1, 0, 0};
int dy[4] = {0 , 0, 1, -1};
char dir[4] = {'D','U','R','L'};
int destx = -1,desty = -1;

void bfs(int x, int y)
{
    Room++;
    visited[x][y] = true;
    queue<pair<int, int> > q;
    q.push({x, y});
    LongRoom = 1;

    while(!q.empty()) {
        int x1 = q.front().first;
        int y1 = q.front().second;
        q.pop();

        for(int i = 0; i < 4; i++) {
            int x_ = x1 + dx[i];
            int y_ = y1 + dy[i];

            if(!visited[x_][y_] && gird[x_][y_] && x_ >= 1 && x_ <= n &&
               y_ >= 1 && y_ <= m) {
                LongRoom++;
                mx = max(mx,LongRoom);
                visited[x_][y_] = true;
                q.push({x_, y_});

            }
        }
    }

}

int main()
{
    optimize();
    cin >> n >> m;

    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= m; j++) {
            char ch; cin >> ch;
            if(ch != '#') {
                gird[i][j] = 1;
            }
        }
    }

//    for(int i = 1; i <= n; i++) {
//        for(int j = 1; j <= m; j++) {
//            cout << gird[i][j] << ' ';
//        }
//        cout <<'\n';
//    }

    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= m; j++) {
            if(!visited[i][j] && gird[i][j]) {
                //cout << i << ' '<< j << '\n';
                bfs(i, j);
            }
        }
    }

    cout << "Rooms - " << Room <<'\n';
    cout << "Length of the longest room - " << mx << '\n';

}


