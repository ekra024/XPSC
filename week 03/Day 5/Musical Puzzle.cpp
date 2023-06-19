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
        string s; cin >> s;
        map<string, ll>mp;
        ll cnt = 0;

        for(int i = 0; i < n-1; i++) {
            string give = "";
            give += s[i];
            give += s[i+1];
            if(mp[give] < 1) cnt++;
            mp[give]++;
        }

        cout << cnt << '\n';
    }
}

