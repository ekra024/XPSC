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
        ll n, k; cin >> n >> k;
        vector<ll>v(n);
        ll score = 0;
        for(ll i = 0; i < n; i++) cin >> v[i];
        sort(v.begin(), v.end());

        ll sz = n - (2*k);
        for(ll i = 0; i < sz; i++) score += v[i];

        map<ll, ll> mp;
        for(ll i = sz; i < n; i++) {
            mp[v[i]]++;
        }

        for(auto it : mp) {
            if(it.second > k) {
                ll res = 2*k - it.second;
                ll num = it.second - res;
                score += (num/2);
            }
        }

        cout << score << '\n';
    }
}

