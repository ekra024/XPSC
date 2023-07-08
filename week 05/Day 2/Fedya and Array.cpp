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
        ll x, y; cin >> x >> y;
        vector<ll>v;

        for(ll i = x; i >= y; i--) v.push_back(i);
        for(ll i = y+1; i < x; i++)v.push_back(i);

        cout << v.size() << '\n';
        for(auto it : v) cout << it << ' ';
        cout << '\n';
    }
}



