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
        if((s[0]=='Y'||s[0]=='y')&&(s[1]=='e'||s[1]=='E')&&(s[2]=='s'||s[2]=='S'))
            cout << "YES\n";
        else cout << "NO\n";
    }
}

