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
        map<ll,ll> mp;
        ll fre = 1, oder = 1,mx = 0;

        for(ll i = 0; i < n; i++) {
            int a; cin >> a;
            mp[a]++;
        }

        for(auto it : mp) {
            if(it.first != oder) break;
            if(it.second > 1) {
                fre=(fre*it.second) % mod;
            }
            mx = (mx + fre) % mod;
            oder++;
        }

        cout << mx%mod << '\n';
    }
}



