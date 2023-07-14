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
        ll n, k, l; cin >> n >> k >> l;

        vector<ll>v;

        for(ll i = 0; i < n; i++) {
            ll m , lan; cin >> m >> lan;
            if(lan == l) {
                v.push_back(m);
            }
        }

        sort(v.rbegin(), v.rend());
        ll song = 0;
        bool ok = true;
        if(v.size() < k) ok = false;
        else {
            for(ll i = 0; i < k; i++) song += v[i];
        }

        if(ok) cout << song << '\n';
        else cout << -1 << '\n';
    }
}


