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
        vector<ll> a(n);

        for(ll i = 0; i < n; i++) cin >> a[i];
        sort(a.begin(), a.end());

        ll l = 0, r = 0, cnt = 0, low = 1, high = 2, Pair = 0;

        while(r < n) {
            while(a[r]>= low && a[r] < high && r < n) {
                cnt++; r++;
            }
            if(cnt) {
               Pair += (cnt*(cnt-1))/2;
               cnt = 0;
            }
            low = high;
            high *= 2;
        }

        cout << Pair << '\n';
    }
}

