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
        string s; cin >> s;
        ll cnt = 0;
        ll l = 0, r = 0, day = 0;
        map<char, ll>mp;
        while(r < s.size()) {
            if(mp[s[r]] < 1) cnt++;
            mp[s[r]]++;
            if(cnt > 3) {
                r--;
                day++;
                cnt = 0;
                mp.clear();
            }
            r++;
        }

        if(cnt > 0) day++;

        cout << day << '\n';
    }
}



