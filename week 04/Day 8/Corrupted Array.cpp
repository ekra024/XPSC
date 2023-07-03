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
        vector<ll>v(n+2);
        list<ll>l;
        for(ll i = 0; i < n+2; i++) cin >> v[i];
        sort(v.rbegin(), v.rend());
        ll sum = 0;
        bool ok = false;

        for(ll i = 2; i < n+2; i++) sum += v[i];
        if(sum == v[1]) {
            for(ll i = 2; i < n+2; i++) cout << v[i] << ' ';
            cout << '\n';continue;
        }
        sum += v[1];


       for(ll i = 1; i < n+2; i++) {
          if(sum - v[i] == v[0]) {
            v[i] = -1;
            ok = true;break;
          }
       }

      if(ok) {
            for(ll i = 1; i < n+2; i++) {
                if(v[i] < 0) continue;
                cout << v[i] << ' ';
            }
            cout << '\n';
      }
      else cout << -1 << '\n';
    }
}



