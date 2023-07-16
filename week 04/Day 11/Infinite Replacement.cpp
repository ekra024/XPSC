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
        string s, t; cin >> s >> t;
        ll n = t.size(), cnt = 0, ans;

        for(ll i = 0; i < n; i++) {
            if(t[i] == 'a') cnt++;
        }

        if(n > 1 && cnt) ans = -1;
        else if(t=="a") ans = 1;
        else ans = pow(2, s.size());

        cout << ans << '\n';
    }
}



