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
    ll t = 1;// cin >> t;
    while(t--) {
        ll n; cin >> n;
        vector<ll>a(n);
        map<ll,ll> mp;

        for(ll i = 0; i < n; i++) {
            cin >> a[i];
            mp[a[i]]++;
        }

        sort(a.begin(), a.end());

        if(n == 1) {
            cout << 1 << '\n';break;
        }
        ll mx = a[n-1] + a[n-2] , cnt = 0;

        for(ll i = 0; i < n; i++) {
            ll ele = a[i], l = 1, p = pow(2,l);
            bool ok = false;

            while(p <= mx) {
                ll diff = p - ele;
                if((mp[diff] > 0 && diff != ele) || (mp[diff] > 1 && diff==ele) )
                    ok = true;
                l++;
                p = pow(2,l);
            }

            if(!ok) cnt++;
        }

        cout << cnt << '\n';
    }
}


