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
        vector<ll>a(n), b, c;

        for(ll i = 0; i < n; i++) cin >> a[i];

        for(ll i = n-1; i >= 0; i-=2) {
            if(i-1 >=0 && a[i] < a[i-1])
                swap(a[i], a[i-1]);
        }

        if(is_sorted(a.begin(), a.end()))
            cout << "YES\n";
        else cout << "NO\n";
    }
}



