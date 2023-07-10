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
        for(ll i = 0; i < n; i++) cin >> b[i];

        queue<ll>q;

        for(ll i = 0; i < n; i++) {
            ll amt = 0;
            ll temp = q.size();
            while(!q.empty() && temp--) {
                ll mn = min(a[i], q.front());
                amt += mn;
                q.pop();
            }

            ll mm = min(a[i], b[i]);
            amt += mm;
            ll diff = a[i] - mm;
            if(diff) q.push(diff);
            cout << diff << '\n';
            ans.push_back(amt);
        }

        for(auto it : ans) cout << it << ' ';
        cout << '\n';
    }
}



