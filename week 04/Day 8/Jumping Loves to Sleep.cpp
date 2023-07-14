#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define all(x) (x).begin(), (x).end()
#define gcd(a,b)  __gcd(a,b)
#define lcm(a,b) (a*b)/__gcd(a,b)
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int mod = 1e9 + 7;
const int N=1e5;
int hsh[N];

int main()
{
    optimize();
    ll t; cin >> t;
    while(t--) {
        string s; cin >> s;
        vector<pair<char, ll> > v;
        ll n = s.size();
        vector<ll>ans;

        if(n == 1) {
            cout << "1 0\n" << 1 << '\n';
            continue;
        }
        string given = s.substr(1, n-2);

        ans.push_back(1);

        for(ll i = 0; i < given.size(); i++) {
            v.push_back({given[i], i+2});
        }

        ll mnCost = abs(s[0] - s[n-1]);
        if(s[0] > s[n-1]) {
            sort(v.rbegin(), v.rend());

            for(ll i = 0; i < v.size(); i++) {
                char ch = v[i].first;
                if(ch<= s[0] && ch>= s[n-1]) {
                    ans.push_back(v[i].second);
                }
            }

        }
        else {
            sort(v.begin(), v.end());

            for(ll i = 0; i < v.size(); i++) {
                char ch = v[i].first;
                if(ch>= s[0] && ch<= s[n-1]) {
                    ans.push_back(v[i].second);
                }
            }
        }
        ans.push_back(n);

        cout << mnCost <<' '<< ans.size() <<'\n';
        for(auto it : ans) cout << it << ' ';
        cout << '\n';

    }
}



