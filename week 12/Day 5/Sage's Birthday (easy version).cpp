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
    ll t=1;// cin >> t;
    while(t--) {
        ll n; cin >> n;
        ll a[n];
        for(int i = 0; i < n; i++)
            cin >> a[i];
        sort(a, a+n);
        ll l = 0, r = n/2;
        vector<ll> v;

        for(int i = 0; i < n/2; i++) {
            v.push_back(a[r]);
            r++;
            v.push_back(a[l]);
            l++;
        }
        if(n%2)v.push_back(a[n-1]);

        cout << (n-1)/2 << '\n';
        for(auto it : v) {
            cout << it << ' ';
        }
        cout << '\n';
    }
}

