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
        ll x, y; cin >> x >> y;
        ll k = abs(x-y);
        ll mn = min(x, y);

        if(k >= 2) {
            if(x>y) cout << "CHEF\n";
            else cout << "CHEFINA\n";
        }
        else {
            if(x == y && x%2) cout << "CHEF\n";
            else if(x == y) cout << "CHEFINA\n";
            else if(mn%2) cout << "CHEF\n";
            else cout << "CHEFINA\n";
        }
    }
}



