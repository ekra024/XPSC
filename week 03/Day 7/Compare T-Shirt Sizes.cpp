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
        string a, b; cin >> a >> b;
        char ch1 = a.back();
        char ch2 = b.back();
        char ch;

        if(ch1 == ch2) {
            if(a.size() == b.size()) ch = '=';
            else if(ch1 == 'S') ch = (a.size() > b.size() ? '<' : '>');
            else ch = (a.size() > b.size() ? '>' : '<');
        }
        else ch = (ch1 > ch2 ? '<' : '>');

        cout << ch << '\n';
    }
}

