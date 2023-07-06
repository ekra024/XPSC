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
        string s; cin >> s;
        map<ll , ll> mp;
        map<char, ll> ans;
        for(ll i = 0; i < m; i++) {
            int a; cin >> a;
            mp[a]++;
        }

        ll cnt = 0;

        for(ll i = n-1; i >= 0; i--) {
            if(mp.find(i+1) != mp.end()) {
                cnt += mp[i+1];
            }
            ans[s[i]]++;
            ans[s[i]] += cnt;
        }

        for(char i = 'a'; i <= 'z'; i++) {
            cout << ans[i] << ' ';
        }
        cout << '\n';
    }
}



