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
        set<ll>s1, s2;
        bool ok = true;
        vector<ll>v(n);

        for(ll i = 0; i < n; i++) {
            cin >> v[i];
            if(i < n/2) s1.insert(v[i]);
            else s2.insert(v[i]);
        }

        ll mn = v[0], cnt = 0;

        for(ll i = 0; i < n; i+=2) {
            if(i < n-1 && abs(v[i] - v[i+1]) != 1) ok = false;
        }

        for(ll i = 0; i < n; i++) {
            if(v[i] < mn) {
                cnt++;
            }
            mn = v[i];
        }

        auto first = *s1.begin();
        while(!s1.empty()) {
            auto it = s1.find(first);
            if(it != s1.end()) {
                s1.erase(it);
                first++;
            }
            else if(it == s1.end()){
                ok = false; break;
            }
        }

        auto second = *s2.begin();
        while(!s2.empty()) {
            auto it = s2.find(second);
            if(it != s2.end()) {
                s2.erase(it);
                second++;
            }
            else if(it == s2.end()) {
                ok = false;break;
            }
        }

        if(ok) cout << cnt << '\n';
        else cout << -1 << '\n';
    }
}

