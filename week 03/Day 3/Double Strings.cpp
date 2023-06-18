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
        map<string, bool>mp;
        vector<string>v;
        for(int i = 0; i < n; i++) {
            string s; cin >> s;
            v.push_back(s);
            mp[s] = true;
        }

        string ans = "";
        for(int i = 0; i < n; i++) {
            string s = v[i];
            bool ok = false;

            for(int j = 1; j < s.size(); j++) {
                string s1="", s2="";
                int first = 0;
                while(first < j) {
                    s1 += s[first];
                    first++;
                }
                while(first < s.size()) {
                    s2 += s[first];
                    first++;
                }
                //cout << s1 << ' ' << s2 << '\n';

                if(mp[s1] == true && mp[s2]== true) {
                    //cout << s1 << ' ' << s2 << '\n';
                    ok = true; break;
                }
            }

            if(ok) ans += '1';
            else ans += '0';
        }

        cout << ans << '\n';
    }
}

