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
        string s, pre = ""; cin >> s;
        ll cnt = 0;

        for(ll i = 0; i < n-1; i++) {
            string rem = "";
            rem += s[i];
            rem += s[i+1];
            if( pre[0]!=rem[1])cnt++;
            if(rem[0]==pre[1] && pre[0]==rem[1]){
                pre = rem; continue;
            }
            pre = rem;
        }

        cout << cnt << '\n';
    }
}
