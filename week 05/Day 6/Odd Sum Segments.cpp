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
        ll cnt = 0, rem = 0, sum = 0;
        vector<ll>idx;

        for(ll i = 0; i < n; i++) {
            int a; cin >> a;
            sum += a;
            if(sum%2 && cnt<k-1) {
                cnt++;
                sum = 0;
                idx.push_back(i+1);
            }
        }

        if(sum%2) {
            idx.push_back(n);
            cout << "YES\n";

            for(auto it : idx) cout << it << ' ';
            cout << '\n';
        }
        else cout << "NO\n";
    }
}


