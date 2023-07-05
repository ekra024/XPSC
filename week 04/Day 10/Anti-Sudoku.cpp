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
        vector<string>v;

        for(ll i = 0; i < 9; i++) {
            string s; cin >> s;
            for(ll i = 0; i < s.size(); i++) {
                if(s[i] == '2') s[i] = '1';
            }
            v.push_back(s);
        }

        for(auto it : v) {
            cout << it << '\n';
        }
        cout << '\n';
    }
}



