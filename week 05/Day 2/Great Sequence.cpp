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
        ll n, x; cin >> n >> x;
        multiset<ll> ms;
        vector<ll> v(n);

        for(ll i = 0; i < n; i++) {
            cin >> v[i];
            ms.insert(v[i]);
        }

        ll cnt = 0;

        while(!ms.empty()) {
            ll mnVal = *ms.begin();
            ll pairVal = mnVal*x;
            if(ms.find(pairVal) != ms.end()) {
                auto it = ms.find(pairVal);
                ms.erase(it);
            }
            else cnt++;

            auto it = ms.begin();
            ms.erase(it);
        }

        cout << cnt << '\n';
    }
}



