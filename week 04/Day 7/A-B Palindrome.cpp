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
        ll space = 0;
        ll n = s.size()-1, l = s.size();
        bool ok = true;


        for(ll i = 0; i < s.size(); i++) {
            if(s[i] == '0' && a>0) a--;
            else if(s[i] == '1' && b > 0) b--;
        }

        for(ll i = 0; i < s.size(); i++) {
            if(l%2 && i == n/2) continue;
            if(s[i] == s[n-i] && s[i] != '?')continue;
            if(s[i] == '0' && s[n-i] == '?' && a) {
                s[n-i] = '0'; a--;
            }
            else if((s[i]=='?' && s[n-i] =='0' && a)) {
                s[i] = '0'; a--;
            }
            if(s[i]=='?' && s[n-i] =='1' && b) {
                s[i] = '1'; b--;
            }
            else if(s[i]=='1' && s[n-i] =='?' && b) {
                s[n-i] = '1'; b--;
            }
            if(s[i] == '?' && s[n-i] == '?' && a >= 2){
                a-=2;   s[i] ='0'; s[n-i] = '0';
            }
            if(s[i] == '?' && s[n-i] == '?' && b >= 2){
                b-=2;   s[i] = '1'; s[n-i] = '1';
            }

        }



        if(l%2 && a==1 && b==0 ) {
            if(s[n/2] == '?' || s[n/2] == '0') s[n/2] = '0';
            else ok = false;
            a--;
        }
        else if(l%2 && b == 1 && a == 0) {
            if(s[n/2] == '?' || s[n/2] == '1') s[n/2] = '1';
            else ok = false;
            b--;
        }
        else if(a>0 && b>0) ok = false;


        if(palindrom(s) && ok) cout << s << '\n';
        else cout << -1 << '\n';

    }
}



