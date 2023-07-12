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
        char ch = 'a';
        int idx = -1, n = s.size();

        for(ll i = 0; i < s.size(); i++) {
            if(s[i] == 'a')idx = i;
        }

        if(idx == -1) {
            cout << "NO\n";continue;
        }

        ll l = idx, r = idx+1;
        bool ok = true;

        while(l>= 0 || r < n) {
            if(s[l] == ch && l>=0) {
                l--;ch++;
            }
            else if(s[r] == ch && r <n) {
                r++; ch++;
            }
            else {
                ok = false;break;
            }
        }

        if(ok) cout << "YES\n";
        else cout << "NO\n";
    }
}



