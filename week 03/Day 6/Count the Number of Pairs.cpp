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
        ll n, k; cin >> n >> k;
        string s; cin >> s;
        map<char, ll> mp;
        for(int i = 0; i < n; i++) mp[s[i]]++;
        ll cnt = 0, res = 0;

        for(char ch = 'A'; ch <= 'Z'; ch++) {
            ll r = min(mp[ch] , mp[tolower(ch)]);
            cnt += r;
            ll ct = mp[ch] + mp[tolower(ch)];
            ct -=(r*2);
            res += (ct/2);
        }



        cout << cnt + min(res, k) << '\n';
    }
}
