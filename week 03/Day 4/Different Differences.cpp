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
        ll k, n; cin >> k >> n;
        vector<int>v;
        ll l = 0, temp = k;
        for(int i = 0; i < k; i++) {
            if(n-temp >= 0) {
                v.push_back(n-l);
                n = n-l;
                l++;
                continue;
            }
            v.push_back(--n);
        }
        reverse(v.begin(), v.end());

        for(auto it : v) cout << it << ' ';
        cout << '\n';
    }
}

