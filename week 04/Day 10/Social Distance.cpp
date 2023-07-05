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
       ll n, k; cin >> n >> k;
       string s; cin >> s;
       ll one = 0, cnt = k, l = 0, r = 0, ans = 0, c = 0;

       while(r < s.size()) {
            if(s[r] != '1') {
                if(cnt==k) {
                    ans++;
                    cnt = 0;
                    s[r] = '1';
                }
                else cnt++;
            }
            else {
                if(cnt == k) {
                    cnt = 0;
                }
                else {
                    s[r] = '0';
                    ans--;
                    cnt = 0;
                }
            }
            r++;
       }

       //cout << s << '\n';
       cout << ans << '\n';

    }
}


