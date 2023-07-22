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
        ll n, x; cin >> n >> x;
        bool ok = false;
        string s = "";
        ll cnt = 1;

        if(x >= -(n-1) && x <= (n+1)) ok = true;

        while(n--) {
            if(x-cnt > 0) {
                s += '+';
                cnt += 1;
            }
            else if(x-cnt < 0) {
                s += '-';
                cnt -= 1;
            }
            else s += '*';
        }

        if(ok) cout << s << '\n';
        else cout << -1 << '\n';
    }
}



