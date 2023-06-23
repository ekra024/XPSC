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
        ll n; char ch; cin >>n >> ch;
        string s; cin >> s;
        s += s;

        ll l = n-1, r = 2*n -1, g, ans = INT_MIN;

        while(r >= l) {
            if(s[r] == 'g') g = r;
            r--;
        }


        while(l >= 0) {
            if(s[l] == 'g') g = l;
            if(s[l]== ch) ans = max(ans, g-l);
            l--;
        }

        cout << ans << '\n';
    }
}

