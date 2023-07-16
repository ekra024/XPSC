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
        vector<string>v(n);

        for(ll i = 0; i < n-2; i++) cin >> v[i];

        string first = v[0];
        string s = "";
        s += first[0];
        bool ok = true;

        for(ll i = 0; i < n-3; i++) {
            string s1 = v[i];
            string s2 = v[i+1];

            if(s1[1] != s2[0]) {
                ok = false;
                s += s1[1];
            }

            s += s2[0];
        }

        string last = v[n-3];
        s += last[1];
        if(ok) s += last[1];

        cout << s << '\n';
    }
}



