#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define all(x) (x).begin(), (x).end()
#define gcd(a,b)  __gcd(a,b)
#define lcm(a,b) (a*b)/__gcd(a,b)
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int mod = 1e9 + 7;
const int N=1e5;
int hsh[N];

int main()
{
    optimize();
    ll t; cin >> t;
    while(t--) {
        ll n, m; cin >> n >> m;
        char ch[n][m];

        for(ll i = 0; i < n; i++) {
            for(ll j = 0; j < m; j++) {
                cin >> ch[i][j];
            }
        }

        for(ll i = n-2; i >= 0; i--) {
            for(ll j = m-1; j >= 0; j--) {
                if(ch[i][j] == '*') {
                    ll temp = i+1;
                    while(ch[temp][j] == '.' && i < n) temp++;
                    //cout << ch[temp-1][j] << ch[i][j] << '\n';
                    swap(ch[temp-1][j], ch[i][j]);
                    //cout << ch[temp-1][j] << ch[i][j] << '\n';
                }
            }
        }

        for(ll i = 0; i < n; i++) {
            for(ll j = 0; j < m; j++) {
                cout << ch[i][j];
            }
            cout << '\n';
        }
        cout << '\n';
    }
}



