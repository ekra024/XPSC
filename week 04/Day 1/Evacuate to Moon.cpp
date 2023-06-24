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
        ll n, m, h; cin >> n >> m >> h;
        vector<ll>a(n),b(m);
        for(int i = 0; i < n; i++) cin >> a[i];
        for(int i = 0; i < m; i++) cin >> b[i];

        sort(a.rbegin(), a.rend());
        sort(b.rbegin(), b.rend());

        ll power = 0;
        for(int i = 0; ; i++) {
            if(i >= n || i >= m) break;
            ll can_take = b[i]*h;
            power += min(can_take, a[i]);
        }

        cout << power << '\n';
    }
}


