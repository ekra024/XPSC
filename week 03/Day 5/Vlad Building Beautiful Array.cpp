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
        ll n, mneven = INT_MAX, mnodd = INT_MAX; cin >> n;
        vector<ll> v(n);
        for(int i = 0; i < n; i++) {
            cin >> v[i];
            if(v[i]%2) mnodd = min(mnodd, v[i]);
            else mneven = min(mneven, v[i]);
        }

        ll oddCnt = 0, evenCnt = 0;
        for(int i = 0; i < n; i++) {
            if(v[i]%2) oddCnt++;
            else {
                evenCnt++;
                v[i]-=mnodd;
                if(v[i] > 0) oddCnt++;
            }
        }

        if((oddCnt == n) || (evenCnt == n)) cout << "YES\n";
        else cout << "NO\n";
    }
}

