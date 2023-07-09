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
        vector<ll>a(n), b(n),mx, mn;

        for(ll i = 0; i < n; i++) cin >> a[i];
        for(ll i = 0; i < n; i++) cin >> b[i];

        ll l = 0, r = 0;

        while(l < n) {
            while(b[r] < a[l] && r < n) r++;
            mn.push_back(b[r]-a[l]);
            l++;
        }

        l = n-1, r = n-1;

        while(l >= 0) {
            mx.push_back(b[r] - a[l]);
            if(a[l] > b[l-1]) r= l - 1;
            l--;

        }

        for(auto it : mn) cout << it << ' ';
        cout << '\n';
        for(ll i = mx.size()-1; i >= 0; i--) {
            cout << mx[i] << ' ';
        }
        cout << '\n';

    }
}



