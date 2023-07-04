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
        ll n, x, y; cin >> n >> x >> y;
        ll diff = y - x;
        bool ok = false;
        if(diff%(n-1)) {
            ll num = (diff / (n-1)) + 1;
            for(ll i = num; ;i++) {
                if((diff%i) == 0) {
                    diff = i;
                    break;
                }
            }
        }
        else diff /= (n-1);

        ll temp = y;
        for(ll i = 1; i <= n; i++) {
            cout << temp << ' ';
            if(ok) {
                temp += diff;
                continue;
            }
            temp -= diff;
            if(temp < 1) {
                temp = y+ diff;
                ok = true;
            }

        }
        cout << '\n';
    }
}

