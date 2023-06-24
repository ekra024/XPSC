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
        ll factor = 0;
        vector<ll>v;

        for(int i = 0; i < n; i++) {
            int a; cin >> a;
            while(a%2==0) {
                factor++;
                a/=2;
            }
        }

        ll ans = -1;

        if(factor >= n) {
            ans = 0;
            }
        else {
            for(int i = n; i > 0; i--) {
                if(i%2 == 0) {
                    ll rem = 0, temp = i;
                    while(temp%2 == 0) {
                        rem++; temp/=2;
                    }
                    v.push_back(rem);
                }
            }

            sort(v.rbegin(), v.rend());
            for(ll i = 0; i < v.size(); i++) {
                factor += v[i];
                if(factor >= n) {
                    ans = i+1;
                    break;
                }
            }
        }

        cout << ans << '\n';
    }
}


