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
        ll n = s.size();
        ll m = n;
        map<char, bool>mp;

        for(ll i = 0; i < n; i++) {
            char ch = s[i];
            if(mp[ch] == true) {
                m -= 2;
                mp.clear();
            }
            else mp[ch] = true;
        }

        cout << m << '\n';


    }
}



