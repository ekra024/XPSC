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
        string first = "", second = "";
        bool ok = true;

        for(ll i = 0; i < n; i++) {
            if(s[i] == '2') {
                if(!ok) first += '0', second+= s[i];
                else first += '1', second+= '1';
            }
            else if(s[i] == '0'){
                first += s[i]; second += '0';
            }
            else {
                if(ok) {
                    first += s[i];
                    second += '0';
                    ok = false;
                }
                else {
                    first += '0';
                    second += '1';
                }
            }
        }

        cout << first << '\n' << second << '\n';
    }
}



