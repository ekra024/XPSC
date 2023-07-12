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
    ll t=1;// cin >> t;
    while(t--) {
        string s, t; cin >> s >> t;
        ll cnt = 0;
        ll l = s.size()-1, r = t.size()-1;

        while(l>=0 && r>=0) {
            if(s[l] == t[r]) {
                cnt++; l--, r--;
            }
            else break;
        }

        cnt = (l+1) + (r+1);

        cout << cnt << '\n';
    }
}


