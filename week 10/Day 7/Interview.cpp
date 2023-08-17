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
        int n; cin >> n;
        vector<ll> a(n+1);
        for(int i = 1; i <= n; i++) {
            cin >> a[i];
        }
        ll ans, low = 1, high = n;
        while(low <= high) {
            ll mid = low + (high-low)/2;
            ll len = mid - low + 1;
            if(low == high) {
                ans = mid;
                break;
            }
            cout << "? "<<len<<" ";
            ll sum = 0;
            for(int i = low; i <= mid; i++) {
                cout << i <<" ";
                sum += a[i];
            }
            cout << endl;
            fflush(stdout);
            ll res;
            cin >> res;
            if(res > sum) {
                high = mid;
            }
            else low = mid + 1;
        }

        cout << "! "<< ans <<endl;
        fflush(stdout);
    }
}

