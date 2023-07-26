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
        string s, ans = ""; cin >> s;

        for(ll i = 0; i < n-1; i++) {
            ll cnt = 0;
            ans += s[i];
            while(s[i] == s[i+1] && i < n-1) {
                i++; cnt++;
            }
            if(cnt == 1) ans += s[i];
            else if(cnt > 1 && (cnt%2)) ans += s[i];
        }

        if(s[n-2] != s[n-1]) ans += s[n-1];

        cout << ans <<'\n';
    }
}




