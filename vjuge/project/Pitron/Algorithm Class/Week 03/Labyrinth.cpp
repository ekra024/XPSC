#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define all(x) (x).begin(), (x).end()
#define gcd(a,b)  __gcd(a,b)
#define lcm(a,b) (a*b)/__gcd(a,b)
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

const int N=1010;
int hsh[N];
bool visited[N][N];
int adj_Mx[N][N];
pair<int,int> parent[N][N];
int n, m;

int dx[4] = {-1, 0, 0, 1};
int dy[4] = {0, -1, 1, 0};
char dir[4] = {'U','L','R','D'};

void bfs(int x, int y)
{
    queue<pair<int, int> > q;
    q.push({x, y});
    visited[x][y] = true;
    parent[x][y] = {-1, -1};

    while(!q.empty()) {
        pair<int, int> u = q.front();
        q.pop();

        for(int i = 0; i < 4; i++) {
            int x1 = u.first + dx[i];
            int y1 = u.second + dy[i];

            if(!visited[x1][y1] && adj_Mx[x1][y1] && x1 >= 1 &&
               x1 <= n && y1 >= 1 && y1 <= m) {
                visited[x1][y1] = true;
                q.push({x1, y1});
                parent[x1][y1] = u;

               }

        }
    }
}

int main()
{
    optimize();
    ll t=1; //cin >> t;
    while(t--) {
        cin >> n >> m;
        char gird[n+5][m+5];
        int s_x, s_y, e_x, e_y;
        for(int i = 1; i <= n; i++) {
            for(int j = 1; j <= m; j++) {
                cin >> gird[i][j];
                if(gird[i][j] != '#')
                    adj_Mx[i][j] = 1;

                if(gird[i][j] == 'A') {
                    s_x =i , s_y = j;
                }
                else if(gird[i][j] == 'B') {
                    e_x = i, e_y = j;
                }
            }
        }

        bfs(s_x,s_y);

//        for(int i = 1; i <= n; i++) {
//            for(int j = 1; j <= m; j++) {
//                cout << adj_Mx[i][j] <<" ";
//            }
//            cout << "\n";
//        }

        if(visited[e_x][e_y]) {
            cout << "YES\n";
            vector< pair<int, int> >path;
            path.push_back({e_x, e_y});
            int x_ = e_x, y_ = e_y;

            while(parent[x_][y_] != make_pair(-1, -1)) {
                pair<int, int> p = parent[x_][y_];
                x_ = p.first, y_ = p.second;
                path.push_back({x_, y_});
            }

            string ans="";
            reverse(path.begin(), path.end());
            for(int i = 0; i < path.size()-1; i++) {
                for(int j = 0; j < 4; j++) {
                    int dix = path[i].first + dx[j];
                    int diy = path[i].second + dy[j];

                    if(dix == path[i+1].first && diy == path[i+1].second) {
                        ans += dir[j];
                    }

                }
            }

            cout << ans.size() << "\n";
            cout << ans << "\n";
        }
        else cout << "NO\n";
    }
}

