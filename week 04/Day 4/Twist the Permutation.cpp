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
        ll n, cnt = 0; cin >> n;
        vector<ll>v(n+1), ans, a(n+1);
        for(ll i = 1; i <= n; i++) cin >> v[i];

        ll cur = n;

        for(ll i = n; i >= 1; i--) {
            ll val = i;

            for(ll j = 1; j <= n; j++) {
                if(v[j] == val){
                    val = j;break;
                }
            }
            if(i == val) {
                ans.push_back(0);
            }
            else {
                bool ok = false;
                ans.push_back(val);
                ll d = val;

                for(ll j = i; j >= 1; j--) {
                   if(val < 1) {
                        ok = true; val = i;
                   }
                   if(ok) {
                        a[j] = v[val];
                        val--;
                   }
                   else {
                        a[j] = v[val];
                        val--;
                   }
                }

                v = a;
            }

        }
        reverse(ans.begin(), ans.end());

        for(auto it : ans) {
            cout << it << ' ';
        }
        cout << '\n';
    }
}



