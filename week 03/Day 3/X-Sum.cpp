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
        ll n, m; cin >> n >> m;
        ll a[n][m], sum, ans = INT_MIN;

        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) cin >> a[i][j];
        }

        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                sum = a[i][j];
                ll p = i, q = j;
                p--, q--;
                while(p>= 0 && q >= 0) {
                    sum += a[p][q];
                    p--, q--;
                }
                p = i, q = j;
                p++, q--;
                while(p < n && q >= 0) {
                    sum += a[p][q];
                    p++, q--;
                }
                p = i, q = j;
                p--, q++;
                while(p >= 0 && q < m) {
                    sum += a[p][q];
                    p--, q++;
                }
                p = i, q = j;
                p++, q++;
                while(p < n && q < m) {
                    sum += a[p][q];
                    p++, q++;
                }

                ans = max(ans, sum);
            }

        }

       cout << ans << '\n';
    }
}

