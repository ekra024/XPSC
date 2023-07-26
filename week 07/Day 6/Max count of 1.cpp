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
         int n; cin >> n;
         string s; cin >> s;
         int c1 = 0, c2 = 0, x1 = 0, x2 = 1;

         for(int i = 0; i < n; i++) {
            c1 += x1;
            int a = s[i] - '0';
            x1 = x1 ^ a;
         }

         for(int i = 0; i < n; i++) {
            c2 += x2;
            int a = s[i] - '0';
            x2 = x2 ^ a;
         }

         cout << max(c1, c2) << '\n';
    }
}



