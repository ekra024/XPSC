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
        ll n; cin >> n;
        string s; cin >> s;
        map<char, ll> mp;
        ll mnOperation = 0, cnt = 0, c = 0, total = 0;

        for(ll i = 0; i < n; i++) {
            mp[s[i]]++;
        }

        for(auto it : mp) {
            if(it.second%2 == 0) cnt++;
            else {
                c++;
                total += it.second;
            }
        }

        if(c >= 2) mnOperation = 0;
        else if((n%2) && c==1 && total!= n) mnOperation = 1;
        else if((n%2==0) && c==0) mnOperation = 1;
        else mnOperation = 2;

        cout << mnOperation << '\n';
    }
}



