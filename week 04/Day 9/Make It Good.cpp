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
        vector<ll>a(n);

        for(ll i = 0; i < n; i++) cin >> a[i];

        ll cnt = 1, l;
        for(l = n-1; l>= 1; l--) {
            if(a[l-1] >= a[l]) cnt++;
            else break;
        }

        for(ll r = l; r >= 1; r--) {
            if(a[r-1] <= a[r]) cnt++;
            else break;
        }

        cout << n-cnt << '\n';
    }
}


