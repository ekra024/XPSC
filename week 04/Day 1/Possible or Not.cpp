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
        ll n, b; cin >> n >> b;
        vector<ll>a(n);
        ll mx = INT_MIN, ans = -1;
        bool possible = false;

        for(int i = 0; i < n; i++) {
            cin >> a[i];
        }

        for(int i = 0; i < n; i++) {
            if((a[i] & b) == b) {
                ans = ans & a[i];
            }
        }

        if(ans == b) cout <<"YES\n";
        else cout << "NO\n";
    }
}

