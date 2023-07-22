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
        ll n; cin >> n;
        vector<ll>a(n);

        for(ll i = 0; i < n; i++) cin >> a[i];
        ll cnt = 0, mn = INT_MAX;

        for(ll i = n-1; i >= 0; i--) {
            if(a[i] < mn) {
                mn = a[i];
            }
            else if(a[i] > mn) {
                cnt++;
            }
        }

        cout << cnt << '\n';
    }
}


