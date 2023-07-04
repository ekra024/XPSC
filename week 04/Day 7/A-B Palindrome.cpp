#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define all(x) (x).begin(), (x).end()
#define gcd(a,b)  __gcd(a,b)
#define lcm(a,b) (a*b)/__gcd(a,b)
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
const int N=1e5;
int hsh[N];

bool palindrom(string s) {
    ll n = s.size()-1;
    for(ll i = 0; i < s.size()/2; i++) {
        if(s[i] != s[n - i]) return false;
    }

    return true;
}

int main()
{
    optimize();
    ll t; cin >> t;
    while(t--) {
        ll a, b; cin >> a >> b;
        string s; cin >> s;

        ll n = s.size()-1, l = s.size();
        bool ok = true;

        for(ll i = 0; i < s.size(); i++) {
            if(s[i] == s[n-i] && s[i] == '?')continue;
            else if(s[i] != '?' && s[n-i] == '?') {
                s[n-i] = s[i];
                s[n-i] == '0'? a-- : b--;
            }
            else if((s[i]=='?' && s[n-i] !='?')) {
                s[i] = s[n-i];
                s[n-i] == '0'?a-- : b--;
            }
            else s[i] == '0'? a--: b--;

            if(a < 0 || b < 0) ok = false;

        }

        for(ll i = 0; i < l; i++) {
            if(i == n-i && s[i]== '?') {
                if(a > 0) s[i] = '0';
                else if(b > 0) s[i] = '1';
                else ok = false;
            }
            else if(s[i] == '?' && s[n-i] == '?') {
                if(a > 1) {
                    s[i] = '0';
                    s[n-i] = '0';
                    a -= 2;
                }
                else if(b > 1) {
                    s[i] = '1';
                    s[n-i] = '1';
                    b -= 2;
                }
                else ok = false;
            }
        }

        if(ok and palindrom(s)) cout << s << '\n';
        else cout << -1 << '\n';

    }
}



