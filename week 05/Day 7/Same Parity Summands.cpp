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
        ll n, k; cin >> n >> k;
        vector<ll> ans;
        bool ok = false;

        if(k == 1){
            ok = true;
            ans.push_back(n);
        }
        else if(n%2 == 0) {
            if(k%2 && k*2 <= n) {
                ok = true;
                ll temp = k-1;
                while(k-- && k > 0) ans.push_back(2);
                ans.push_back(n-(2*temp));
            }
            else if(k%2==0 && n >= k) {
                ok = true;
                ll temp = k-1;
                while(k-- && k > 0) ans.push_back(1);
                ans.push_back(n-(temp));
            }
        }
        else if(n%2) {
            if(k%2 && n >= k) {
                ok = true;
                ll temp = k-1;
                while(k-- && k > 0) ans.push_back(1);
                ans.push_back(n-(temp));
            }
        }

        if(ok) {
            cout << "YES\n";
            for(auto it : ans) cout << it << ' ';
            cout << '\n';
        }
        else cout << "NO\n";
    }
}



