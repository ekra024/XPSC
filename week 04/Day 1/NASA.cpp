#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define all(x) (x).begin(), (x).end()
#define gcd(a,b)  __gcd(a,b)
#define lcm(a,b) (a*b)/__gcd(a,b)
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
const int N=1e5;
int hsh[N];
vector<int>v;

bool isPalindrome(ll val) {
    string s = to_string(val);
    string s2 = s;
    reverse(s2.begin(), s2.end());
    return s == s2;
}

int main()
{
    optimize();

    for(ll i = 0; i < (1 << 15); i++) {
        if(isPalindrome(i)) {
            v.push_back(i);
        }
    }

    ll t; cin >> t;
    while(t--) {
       ll n; cin >> n;
       ll a[n];
       unordered_map<ll, ll> freq;

       for(ll i = 0; i < n; i++) {
            cin >> a[i];
            freq[a[i]]++;
       }

       ll ans = 0;

       for(ll i = 0; i < n; i++) {
            for(ll j = 0; j < v.size(); j++) {
                ll k = a[i] ^ v[j];
                if(k > (1 << 15)) {
                    continue;
                }
                ll x = freq[k];
                ans += freq[k];

            }
       }

       cout << (ans+n)/2 << '\n';
    }
}

