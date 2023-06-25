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
        ll odd = 1, even = n;
        vector<ll>v;
        if(n == 1) {
            cout << 1 << '\n';
            continue;
        }
        else if(n%2) {
            cout << -1 << '\n';
            continue;
        }

        while(odd < n && even > 1) {
            v.push_back(even);
            v.push_back(odd);
            even-=2; odd+=2;
        }

        for(auto it : v) cout << it << ' ';
        cout << '\n';
    }
}

