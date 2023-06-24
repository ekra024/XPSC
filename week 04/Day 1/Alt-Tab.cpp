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
    ll n; cin >> n;
    map<string, ll> mp;
    vector<string>v;
    for(int i = 0; i < n; i++) {
        string s; cin >> s;
        v.push_back(s);
    }
    string ans = "";

    for(int i = n-1; i>=0; i--) {
        if(mp[v[i]] < 1){
            string g = v[i];
            ans += g[g.size() - 2];
            ans += g[g.size() - 1];
        }
        mp[v[i]]++;
    }

    cout << ans << '\n';
}


