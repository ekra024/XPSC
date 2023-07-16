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
    ll t=1;// cin >> t;
    while(t--) {
        int n, k; cin >> n >> k;
        vector<int> v(n);
        ll l = 0, r = 0;

        for(int i = 0; i < n; i++) cin >> v[i];

        ll mx = 0, sum = 0,ans = -1;

        while(r < n) {
            sum += v[r];
            if(r-l+1 < k) {
                r++;
            }
            else if(r-l+1 == k) {
                ans = max(ans, sum);
                sum -= v[l];
                l++;
                r++;
            }
        }

        cout << ans << '\n';
    }
}


