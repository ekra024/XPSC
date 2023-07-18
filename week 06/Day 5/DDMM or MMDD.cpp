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
        string s; cin >> s;
        ll d1 = s[0] - '0';
        ll d2 = d1*10 + (s[1] - '0');
        ll d3 = s[3] - '0';
        ll d4 = d3*10 + (s[4] - '0');

        bool date = false, month = false;

        if(d2<=12) date = true;
        if(d4 <= 12) month = true;

        if(date & month) cout << "BOTH\n";
        else if(month) cout << "DD/MM/YYYY\n";
        else if(date) cout << "MM/DD/YYYY\n";
    }
}


