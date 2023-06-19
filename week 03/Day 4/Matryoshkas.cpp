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
        multiset<ll>ms;
        ll cnt = 0;
        for(int i = 0; i < n; i++) {
            int a; cin >> a;
            ms.insert(a);
        }

        while(!ms.empty()) {
            int mx = *ms.rbegin();
            while(1) {
                auto it = ms.find(mx);
                if(it == ms.end()) break;
                ms.erase(it);
                mx--;
            }
           cnt++;
        }

        cout << cnt << '\n';
    }
}

