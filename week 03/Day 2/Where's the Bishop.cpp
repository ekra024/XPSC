#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define all(x) (x).begin(), (x).end()
#define gcd(a,b)  __gcd(a,b)
#define lcm(a,b) (a*b)/__gcd(a,b)
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
const int N=1e5;
int hsh[N];

int main()
{
    optimize();
    ll t; cin >> t;
    while(t--) {
        vector<vector<char> >v(8, vector<char>(8));
        for(int i = 0; i < 8; i++) {
            for(int j = 0; j < 8; j++) {
                char ch; cin >> ch;
                v[i][j] = ch;
            }
        }

        ll row, col;

        for(int i = 1; i < 7; i++) {
            for(int j = 1; j < 7; j++) {
                if(v[i][j] =='#' && v[i-1][j-1]=='#' && v[i+1][j+1] =='#'
                   && v[i-1][j+1] == '#' && v[i+1][j-1] == '#') {
                    row = i+1; col = j+1;
                   }
            }

        }

        cout << row << ' '<< col << '\n';
    }
}


