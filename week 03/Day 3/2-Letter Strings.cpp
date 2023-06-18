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
        map<string, ll> mp;
        map<char, ll> first, second;
        vector<string>v;

        for(int i = 0; i <n; i++) {
            string s; cin >> s;
            v.push_back(s);
            mp[s]++;
            first[s[0]]++;
            second[s[1]]++;
        }

        for(int i = 0; i < n-1; i++) {
            string s = v[i];
            int f = first[s[0]];
            int snd = second[s[1]];
            int r = mp[s];
            //cout << f << ' '<< snd << ' '<< r << ' ';

            cnt = cnt + (f-1) - (r-1);
            cnt = cnt + (snd-1) - (r-1);
            first[s[0]]--;
            second[s[1]]--;
            mp[s]--;
            //cout << cnt << '\n';
        }

        cout << cnt << '\n';
    }
}

