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

        for(ll i = 0; i < n; i++) {
            int a; cin >> a;
            ms.insert(a);
        }

        ll dollSet = 0;

        while(!ms.empty()) {
            auto first = *ms.begin();
            //cout << first << ' ';
            while(1) {
                auto it = ms.find(first);
                if(it != ms.end()) {
                    ms.erase(it);
                }
                else break;
                first++;
            }
            dollSet++;
        }

        cout << dollSet << '\n';
    }
}

