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
        string s; cin >> s;
        ll n = s.size();
        ll ans = 0, one = 0, zero = n-1;

        for(ll i = 0; i < s.size(); i++) {
           if(s[i] == '0') {
            zero = i; break;
           }
           if(s[i] == '1') {
            one = i;
           }
        }

       ans = zero - one + 1 ;
       cout << ans << '\n';
    }
}



