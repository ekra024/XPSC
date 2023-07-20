#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define all(x) (x).begin(), (x).end()
#define gcd(a,b)  __gcd(a,b)
#define lcm(a,b) (a*b)/__gcd(a,b)
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int mod = 1e9 + 7;
const int N=1e6;
int hsh[N];

int main()
{
    optimize();
    ll t; cin >> t;
    while(t--) {
        ll n; cin >> n;
        if(n == 1) cout << -1 << '\n';
        else if(n <= N) cout << "1 "<< n-1 << ' ' << "1\n";
        else if(n%N) {
            cout << n/N << ' '<< N << ' '<< n%N << '\n';
        }
        else {
            cout << (n/N)-1 << ' '<< N << ' ' << N << '\n';
        }
    }
}



