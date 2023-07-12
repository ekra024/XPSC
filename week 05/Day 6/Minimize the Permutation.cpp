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
        map<ll, ll> mp;
        vector<ll>a(n);
        for(ll i = 0; i < n; i++) cin >> a[i];
        ll cnt = 1;
        for(ll i = 0; i < n-1; i++) {
            for(ll j = 0; j < n; j++) {
                if(a[j] == cnt) {
                    while(a[j] < a[j-1] && j-1 >= 0 && mp[j-1] < 1) {
                        swap(a[j], a[j-1]);
                        mp[j-1]++;
                        j--;
                    }
                    cnt++;break;
                }
            }
            if(is_sorted(a.begin(), a.end())) break;
        }

        for(auto it : a) cout << it << ' ';
        cout << '\n';
    }
}



