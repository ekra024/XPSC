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
        vector<ll> v;

        for(ll i = 1; i <= n*n; i+=2) v.push_back(i);
        for(ll i = 2; i <= n*n; i+=2) v.push_back(i);

        ll cnt = 0;

        for(auto it : v) {
            cnt++;
            cout << it << ' ';
            if(cnt == n) {
                cout << '\n';
                cnt = 0;
            }
        }
    }
}



