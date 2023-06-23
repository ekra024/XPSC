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
        ll n, q; cin >> n >> q;
        vector<ll>v(n);
        ll odd = 0, even = 0, sum = 0;

        for(int i = 0; i < n; i++) {
            int a; cin >> a;
            if(a%2) odd++;
            else even++;
            sum += a;
        }

        while(q--) {
            ll type, num; cin >> type >> num;
            if(type == 0) {
                sum += (num*even);
                if(num%2){
                    odd = odd + even;
                    even = 0;
                }
                cout << sum << '\n';
            }
            else {
                sum += (num*odd);
                if(num%2) {
                    even = odd + even;
                    odd = 0;
                }
                cout << sum << '\n';
            }
        }
    }
}

