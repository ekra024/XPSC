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
        ll n; cin >> n;
        string s; cin >> s;
        ll a = 0, b = -1, alice = 0, bob = 0;

        for(ll i = 0; i < n; i++) {
            if(s[i] == 'A') {
                a++;
            }
            else if(a > -1){
                alice += a;
                a = -1;
            }
            if(s[i] == 'B') {
                b++;
            }
            else if(b > -1){
                bob += b;
                b = -1;
            }
        }

        if(a>-1) alice += a;
        if(b > -1) bob += b;

        cout << alice << ' '<< bob << '\n';
    }
}

