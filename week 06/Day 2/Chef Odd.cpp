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
        ll n, k; cin >> n >> k;
        bool ok = false;
        if(k>n/2) ok = false;
        else {
            ll odd = 0;
            if(n%2) odd = (n/2) + 1;
            else odd = n/2;

            ll res = odd - k;
            if(res%2==0) ok = true;
        }

        if(ok) cout << "YES\n";
        else cout << "NO\n";
    }
}

