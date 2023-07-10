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
        vector<ll>a(n), b(n), ans;

        for(ll i = 0; i < n; i++) cin >> a[i];
        bool ok = true;

        if(a[n-1] == 1) ok = false;

        if(ok) {
            cout << "YES\n";
            for(ll i = n-1; i >= 0; i--) {
                if(i == 0){
                    ans.push_back(0); continue;
                }
                if(a[i] == 0 && a[i-1] == 0) ans.push_back(0);
                else if(a[i] == 0 && a[i-1] == 1) {
                    ll cnt = 0;
                    while(a[i-1]== 1 && i < n) {
                            cnt++; i--;
                    }
                    ll r = cnt;
                    while(cnt--) ans.push_back(0);
                    ans.push_back(r);
                }
            }

            for(auto it : ans) cout << it << ' ';
            cout << '\n';
        }
        else cout << "NO\n";
    }
}



