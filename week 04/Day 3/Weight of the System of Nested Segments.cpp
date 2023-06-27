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
        ll n, m; cin >> n >> m;
        vector<pair<ll,pair<ll, ll> > > v;
        vector<pair<ll, ll> > p;
        vector<pair<ll, ll> >ans;

        for(ll i = 0; i < m; i++) {
           ll x, w; cin >> x >> w;
           v.push_back({w,{x, i+1}});
        }

        cout << '\n';
        ll sum = 0, cnt = 0;

        sort(v.begin(), v.end());
        for(auto it : v) {
            cnt++;
            sum += it.first;
            p.push_back({it.second.first, it.second.second});
            if(cnt == 2*n) break;
        }

        sort(p.begin(), p.end());

        ll l = 0, r = p.size()-1;
        while(l < r) {
            ans.push_back({p[l].second, p[r].second});
            l++, r--;
        }
        cout << sum << '\n';
        for(auto it : ans) {
            cout << it.first << ' '<< it .second << '\n';
        }

    }
}



