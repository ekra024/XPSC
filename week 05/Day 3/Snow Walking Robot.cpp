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
        string s, ans = ""; cin >> s;
        map<char, ll> mp;

        for(ll i = 0; i < s.size(); i++) {
            mp[s[i]]++;
        }

        char r = 'R', l = 'L', u = 'U', d = 'D';
        ll a = min(mp[r], mp[l]), b = min(mp[d], mp[u]);


        ll mxSize = 0;

        if((a==0&&b>0) || (b==0&&a>0)) mxSize = 2;
        else mxSize = (a*2) + (b*2);

        if(a==0 && b > 0) {
            ans += u;
            ans += d;
        }
        else if(b==0 && a > 0) {
            ans += l;
            ans += r;
        }
        else {
            ll temp = b;
            while(temp--) ans += d;
            ll dd = a;
            while(dd--) ans += r;
            while(b--) ans += u;
            while(a--) ans += l;
        }

        cout << mxSize << '\n';
        cout << ans << '\n';
    }
}



