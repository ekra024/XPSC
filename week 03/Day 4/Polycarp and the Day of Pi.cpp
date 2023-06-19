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
        string s,given ="314159265358979323846264338327";
        ll cnt = 0;
        cin >> s;
        for(int i = 0; i < s.size(); i++) {
            if(s[i] == given[i]) cnt++;
            else break;
        }

        cout << cnt << '\n';
    }
}


