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
        vector<ll>v(n), red, blue;
        for(ll i = 0; i < n; i++) cin >> v[i];
        string s; cin >> s;

        for(ll i = 0; i < n; i++) {
            if(s[i] == 'B')blue.push_back(v[i]);
            else red.push_back(v[i]);
        }

        bool ok = true;

        sort(blue.begin(), blue.end());
        sort(red.rbegin(), red.rend());

        for(ll i = 0; i < blue.size(); i++) {
            if(blue[i] < i+1) ok = false;
        }

        for(ll i = 0; i < red.size(); i++) {
            if(red[i] > n-i) ok = false;
        }

        if(ok) cout << "YES\n";
        else cout << "NO\n";
    }
}

