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
        ll n; cin >> n;
        ll mx = 0, idx;

        for(ll i = 2; i*i <= n; i++) {
            ll temp = n, cnt = 0;
            while(temp%i == 0) {
                temp/=i;
                cnt++;
            }
            if(cnt > mx) {
                mx = cnt;
                idx = i;
                cnt = 0;
            }
        }

        if(mx == 0) {
            cout << 1 << '\n' << n << '\n';
        }
        else {
            cout << mx << '\n';
            while(mx-- && mx >= 1) {
                cout << idx << ' ';
                n/= idx;
            }
            cout << n << '\n';
        }
    }
}



