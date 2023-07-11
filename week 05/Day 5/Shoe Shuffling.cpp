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
        map<ll, ll> mp;
        vector < pair <ll, ll> > v;

        for(ll i = 0; i < n; i++) {
            int a; cin >> a;
            mp[a]++;
            v.push_back({a, i+1});
        }

        bool ok = true;

        for(auto it : mp) {
            if(it.second < 2) ok = false;
        }

        if(ok) {
            for(ll i = 0; i < n-1; i++) {
                if(v[i].first == v[i+1].first) {
                    swap(v[i].second, v[i+1].second);
                }
            }

            for(auto it : v) cout << it.second << ' ';
            cout << '\n';
        }

        else cout << -1 << '\n';
    }
}



