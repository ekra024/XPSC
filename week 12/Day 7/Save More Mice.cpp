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
        ll n, k; cin >> n >> k;
        vector<ll>a(k);
        for(ll i = 0; i < k; i++) cin >> a[i];
        ll sum = 0, mice = 0;
        sort(a.rbegin(), a.rend());
        ll temp = 0;

        for(ll i = 0; i < k; i++) {
            ll diff = n - a[i];
            sum += diff;
            if(sum < n ) mice++;
            else break;

        }

        cout << mice << '\n';
    }
}


