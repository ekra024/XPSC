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
        ll n, s, r; cin >> n >> s >> r;
        vector<int>v;
        v.push_back(s-r);
        ll sz = n-1;
        ll val = r/(sz);
        ll diff = r%sz;
        for(int i = 0; i < n-1; i++) {
            if(diff-- && diff >= 0) {
                v.push_back(val+1);
                continue;
            }
            v.push_back(val);
        }

        for(auto it : v) cout << it << ' ';
        cout << '\n';
    }
}


