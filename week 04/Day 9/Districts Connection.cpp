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
        vector<ll>v(n);
        vector<pair<ll, ll> > p;
        map<ll, ll> mp;
        set<ll>s;
        bool ok = false;

        for(ll i = 0; i < n; i++) {
            cin >> v[i];
            mp[v[i]]++;
        }

        if(mp.size() >= 2) ok = true;

        if(ok) {
                cout << "YES\n";
                ll index;
                for(int i = 1; i < n; i++) {
                    if(v[i] != v[0]) {
                        p.push_back({1, i+1});
                        index = i+1;
                    }
                }
                for(int i = 1; i < n; i++) {
                    if(v[i] == v[0]) {
                        p.push_back({index, i+1});
                    }
                }


            for(auto it : p) cout << it.first << ' ' << it.second << '\n';
        }
        else cout << "NO\n";

    }
}

